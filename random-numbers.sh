#!/bin/bash
g++ random.cpp -o random.o
./random.o < input.txt > output.txt
output="`cat output.txt`"
count=0
for line in $output
do
    if [ $line -gt $1 ]
    then
        count=$((count+1))
    fi
done
echo $count
