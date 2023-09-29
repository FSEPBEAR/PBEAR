#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 256 -max_height 10 -init_comp_size 5 results/combinations/acc/synth/gcd_test_0.sl > results/combinations/acc/synth/result_gcd_test_0 2>&1

