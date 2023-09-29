#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 512 -max_height 15 -init_comp_size 5 results/combinations/gcd_1+newton_1_6.i/synth/gcd_test_0.sl > results/combinations/gcd_1+newton_1_6.i/synth/result_gcd_test_0 2>&1

