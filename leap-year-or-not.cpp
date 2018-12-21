#include<iostream>
using namespace std;
bool leapyear (int year)
{
        if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}
int main()
{
    int year = 1;
    while(year > 0)
    {
        cout << "Enter a year (or negative number to quit):";
        cin >> year;
            if (year > 0)
            {
                if (leapyear(year))
                {
                    cout << year << " is a leap year."<<endl;
                }
                else
                {
                    cout << year << " is not a leap year " << endl;
                }
            }
            else
            {
                cout << "Bye!"<<endl;
            }
    }

}
