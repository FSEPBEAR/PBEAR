#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 256 -max_height 10 -init_comp_size 1 results/seq-mthreaded/acc/synth/check_0.sl > results/seq-mthreaded/acc/synth/result_check_0 2>&1

