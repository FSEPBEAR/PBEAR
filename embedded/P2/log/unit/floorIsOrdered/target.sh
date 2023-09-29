#!/bin/bash
cd /home/yoel/iv-project/results/elevator/log/unit/floorIsOrdered
/opt/CROWN-CLI-ubuntu18.04/bin/crownc target.c
 /opt/CROWN-CLI-ubuntu18.04/bin/run_crown ./target 10000 -dfs > result.txt 2>&1
