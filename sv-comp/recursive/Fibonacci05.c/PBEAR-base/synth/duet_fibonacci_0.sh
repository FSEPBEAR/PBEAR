#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 512 -max_height 15 -init_comp_size 5 results/recursive/Fibonacci05.c/no_alarm/synth/fibonacci_0.sl > results/recursive/Fibonacci05.c/no_alarm/synth/result_fibonacci_0 2>&1

