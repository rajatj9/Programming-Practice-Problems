#!/bin/bash

words="`./getWords.sh $1 | sort | uniq -c | sort -nr | head -1`"
set --$words
echo "$2 $1"
