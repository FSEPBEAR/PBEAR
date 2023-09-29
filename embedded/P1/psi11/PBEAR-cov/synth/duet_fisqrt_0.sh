#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 512 -max_height 15 -init_comp_size 3 results/obj-follow/p2/acc/synth/fisqrt_0.sl > results/obj-follow/p2/acc/synth/result_fisqrt_0 2>&1

