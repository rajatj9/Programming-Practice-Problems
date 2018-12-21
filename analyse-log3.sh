#!/bin/bash

content="`find . -name "*.log"`"
count='0'
storage=0

for i in $content
do
number="`cat $i | grep -E '/products/' | sort -t' ' -k4 -n | cut -d'	' -f4 | sort -n | uniq | wc -l`"
let "storage=$number + $storage"
let "count=$count+1"
done

let "value=$storage/count"
echo "Average access: $value"
