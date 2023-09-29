#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 600 duet -max_size 512 -max_height 15 -init_comp_size 1 results/seq-mthreaded/pals_floodmax.5.4.ufo.BOUNDED-10.pals.c/acc/synth/check_0.sl > results/seq-mthreaded/pals_floodmax.5.4.ufo.BOUNDED-10.pals.c/acc/synth/result_check_0 2>&1

