#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 600 duet -max_size 512 -max_height 15 -init_comp_size 1 results/elevator/p1/synth/isButtonPressed_0.sl > results/elevator/p1/synth/result_isButtonPressed_0 2>&1

