#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 256 -max_height 10 -init_comp_size 5 results/recursive/acc/synth/fibonacci_0.sl > results/recursive/acc/synth/result_fibonacci_0 2>&1

