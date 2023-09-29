import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class CPARunner {

    public static float peakMemoryUsage = 0.0f;
    public static String memResult = "mem_result.txt";

    public static void main(String[] args) {
        System.out.println("usage: -src [source path] -wd [working directory] [other CPA options]");
        for (String arg: args) {
            System.out.print(arg + " ");
        } System.out.println();

        String before_arg = "";
        String src = "";
        File wd = null; String wdString = ".";
        ArrayList<String> otherOptions = new ArrayList<>();

        for (String arg: args) {
            if (arg.equals("-src") || arg.equals("-wd"));
            else if (before_arg.equals("-src")) {
                src = arg;
            }

            else if (before_arg.equals("-wd")) {
                wdString = arg;
            }

            else {
                otherOptions.add(arg);
            }

            before_arg = arg;
        }

        wd = new File(wdString);
        if (wd.isFile()) {
            System.out.println("The working directory exists in a file! Remove this.");
            System.exit(0);
        }
        if (!wd.exists()) {
            try {
                wd.mkdirs();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        memResult = wd.getPath() + "/" + memResult;
        ArrayList<String> results = runCPA(src, wd, otherOptions);

        try (BufferedReader br = new BufferedReader(new FileReader(memResult))) {
            String usage = null;
            while ((usage = br.readLine()) != null) {
                float memoryUsage = Float.parseFloat(usage);
                if (peakMemoryUsage < memoryUsage) peakMemoryUsage = memoryUsage;
            }
            ProcessBuilder pb = new ProcessBuilder(new String[]{"/bin/sh", "-c", "rm " + memResult});
            Process process = pb.start();
            process.waitFor();
            results.add(String.format("peak memory usage: %.2f MB", peakMemoryUsage));
        } catch (Exception e) {}

        write(wd.getPath() + "/result.txt", results);
    }

    public static ArrayList<String> runCPA(String inFile, File wd, ArrayList<String> otherOptions) {
        ArrayList<String> results = new ArrayList<>();

        StringBuilder builder = new StringBuilder();
        for (String option: otherOptions) {
            builder.append(option + " ");
        }

        try {
            String command = String.format("bash CPAchecker-2.1-unix/scripts/cpa.sh %s %s", builder.toString(), inFile);
            ProcessBuilder pb = new ProcessBuilder(new String[]{"/bin/sh", "-c", command + " 2>&1"});
            pb.redirectErrorStream(false);
            Process process = pb.start();

            BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));
            while (reader.readLine() != null) break; // need to confirm that cpa starts

            if (process.children().findFirst().isPresent()) {
                long pid = process.children().findFirst().get().pid();

                ProcessBuilder memoryChecker = new ProcessBuilder(new String[]{"/bin/sh", "-c", "bash ./mem_checker.sh " 
                + pid + " > " + memResult});
                memoryChecker.redirectErrorStream(true);
                memoryChecker.start();
            }
            else {
                System.out.println("memory checking fails!");
            }

            String line = null;
            while ((line = reader.readLine()) != null) {
                results.add(line);
            }
            reader.close();
            process.waitFor();

        } catch(Exception e) {
            e.printStackTrace();
            System.exit(0);
        }
        return results;
    }

    public static void write(String path, ArrayList<String> results) {
        try {
            File file = new File(path);
            file.setWritable(true);
            FileWriter writer = new FileWriter(file);
            for (String result: results) {
                writer.write(result + "\n");
            }
            writer.close();  
        }
        catch (Exception e) {
            e.printStackTrace();
        }
    }
}
