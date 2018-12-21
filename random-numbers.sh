#!/bin/bash
cppfile="#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    srand (time(NULL));
    int a,b,c,threshold;
    cin >> a >> b >> c;
    for (int i = 0 ; i < c ; i++){
        int value = rand() % abs(b-a+1) + min(a,b);
        cout << value << endl;
   }
    return 0;
}"
cat $cppfile > random.cpp
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
