#include<iostream>
using namespace std;
int main()
{
    int n, number,rem,rev=0;
    cout << "Enter a postive number: ";
    cin >>n;

    number = n;

    while(number>0){
        rem = number%10;
        rev = rev*10+rem;
        number/=10;

    }
    cout << "\nNumber: " << rev <<endl;

}
