#!/bin/bash
files=$(find P1 -type f -name "*.c")

while IFS= read -r file; do
    echo $file
    bash CPAchecker-2.1-unix/scripts/cpa.sh -predicateAnalysis -stats -timelimit '259200s' -heap '80G' -preprocess $file
    echo ' '
done <<< "$files"