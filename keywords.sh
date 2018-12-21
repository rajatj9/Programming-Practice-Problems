#!/bin/bash
files="`ls | grep -E '.txt'`"

overall_occurences=0
overall_keyword=""
overall_file=""

for file in $files
do
echo "$file: `wc -w $file | cut -d " " -f 1` words"
keyword="`./getKeyword.sh $file | cut -d " " -f 1`"
occurences="`./getKeyword.sh $file | cut -d " " -f 2`"
echo "Keyword: $keyword"
echo "`cat $file | grep "$keyword" | head -3`"
echo ""

if [ $occurences -gt $overall_occurences ]
then
overall_occurences=$occurences
overall_keyword=$keyword
overall_file=$file
fi
done


echo "The word is: '$overall_keyword' in $overall_file"
