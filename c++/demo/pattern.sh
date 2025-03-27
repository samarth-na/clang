#!/bin/bash

x=(1 2 3 4 5)
for value in "${x[@]}"; do
    for ((i=1; i<=value; i++)); do
        echo -n "x"
    done
    echo
done
