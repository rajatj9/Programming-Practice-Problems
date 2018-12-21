#include<iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
    string input;
    string newline;
    do
    {
        getline(cin, newline);
        input+= newline;
    }while(newline != "");

    for (int i=0;i<input.length();i++)
    {
        if (!(isalnum(input[i])))
        {
        input.erase(i,1);
        i-=1;
        }
    }
    cout << input;
    return 0;
}
