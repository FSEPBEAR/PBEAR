#!/bin/bash
export LD_LIBRARY_PATH=~/.opam/4.08.0/lib/z3:$LD_LIBRARY_PATH
timeout 300 duet -max_size 256 -max_height 10 results/obj-follow/p10/synth/getArea_0.sl > results/obj-follow/p10/synth/result_getArea_0 2>&1

