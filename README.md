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
* target.c: abstracted program.
* cbmc_result.txt: the result of CBMC with target.c.
* result.txt: overall result of each task.

### CPAchecker:
* predicateAnalysis.txt: the results of CPAchecker using the predicate abstraction option.
* svcomp22.txt: the results of CPAchecker using the svcomp22 option.
* We tried to use the same options used in SV-COMP 2022 when running with SV-COMP benchmarks.
* In three embedded software, we used the options 



