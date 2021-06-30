#include<iostream>
using namespace std;
int main()
{
    int divisor, divident, quotient, reminder;
    cin >> divident;
    cin >> divisor;
    cout << "Quotient is: " << divident/divisor <<endl;
    cout << "Reminder is: " << divident%divisor<<endl;
    return 0;
}
