#include<iostream>
using namespace std;
int main()
{
    int y,m,w,d;
    cin >> d;

    cout << "Number of years: " << d/365 <<endl;
    cout << "Number of month: " << d/30 <<endl;
    cout << "Number of week: " << d/7 <<endl;
    cout << "Number of days: " << d<<endl;
}

