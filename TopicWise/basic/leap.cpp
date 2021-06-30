#include<iostream>
using namespace std;
int main()
{
    int year;

    while(true){
        cin >> year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            {
                if(year%400==0)
                {
                    cout << year << " is leap year\n";
                }
                else
                    cout << year << " is not leap year\n";
            }
        }
        else
            cout << year << " is leap year\n";
    }
    else
        cout << year << " is not leap year\n";
    }
}

