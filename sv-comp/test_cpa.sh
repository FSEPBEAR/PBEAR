#!/bin/bash
javac CPARunner.java

# svcomp22
# while read line || [ -n "$line" ] ; do
#    echo $line
#    java CPARunner -src data/sv-benchmarks/c/$line -wd $line -svcomp22 -stats -benchmark -timelimit 900s -heap 10000M
#    echo ' '
# done < targetList.txt

# predicateAnalysis
while read line || [ -n "$line" ] ; do
    echo $line
    java CPARunner -src data/sv-benchmarks/c/$line -wd $line -predicateAnalysis -stats -skipRecursion -benchmark -timelimit 900s -heap 10000M
    echo ' '
done < targetList.txt