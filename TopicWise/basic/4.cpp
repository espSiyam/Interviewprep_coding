#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >>a;
    cin>> b;

    cout << "Before swapping a and b is: "<< a<<" " <<b <<endl;
    a = a+b;  //a = 7 (4+3)
    b = a-b;  //b = 4
    a = a-b;  //a = 3
    cout << "Before swapping a and b is: "<< a<<" " <<b <<endl;
}

