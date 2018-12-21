#!/bin/bash
rows="`cat $1 | head -1 | wc -w`"

for ((i=1;i<=rows;i++))
do
    echo "`cut -d " " -f $i $1 | paste -s`"
done
