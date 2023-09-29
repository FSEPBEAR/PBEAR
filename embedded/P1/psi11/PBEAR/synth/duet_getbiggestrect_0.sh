#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 600 duet -max_size 512 -max_height 15 -init_comp_size 1 results/obj-follow/p2/synth/getbiggestrect_0.sl > results/obj-follow/p2/synth/result_getbiggestrect_0 2>&1

