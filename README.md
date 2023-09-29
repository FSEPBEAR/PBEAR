# PBEAR

## Directories:
* embedded: results on three embedeed software
* sv-comp: results on SV-COMP benchmarks

In each sub directories (target programs with properties), There are results of CBMC, CBMC-refine, CPAchecker (cpa), PBEAR, PBEAR-base, and PBEAR-cov.

Also, there are details of FSs:
* PBEAR-synth: the details of synthesized FSs in PBEAR.
* PBEAR-cov-synth: the details of synthesized FSs in PBEAR-cov.

### PBEAR, PBEAR-base, and PBEAR-cov:
* filter/: the details of (concrete) symbolic alarm filtering process.
* synth/: the details of PBE-based FS refinement.
* target.c: the abstracted program.
* cbmc_result.txt: the result of CBMC with target.c.
* result.txt: the overall result of each property falsification. We have used different terminology than what was used in the paper. For example, we used 'FS' as 'stub' and 'symbolic alarm filtering' as 'true alarm filtering,' etc. 

### CPAchecker:
* predicateAnalysis.txt: the results of CPAchecker using the predicate abstraction option.
* svcomp22.txt: the results of CPAchecker using the svcomp22 option.
* We tried to use the same options used in SV-COMP 2022 when running with SV-COMP benchmarks.
* For three embedded software, we used -predicateAnalysis -stats -timelimit '259200s' -heap '80G' -preprocess.



