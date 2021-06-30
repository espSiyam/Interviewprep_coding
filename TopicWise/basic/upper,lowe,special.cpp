#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if(ch=>65&&ch<=90)
        cout << ch << " is uppercase character\n";
    else if(ch>=48&&ch<=57)
        cout << ch << " is lowercase character\n";
    else if(ch>=97 && ch <=122)
        cout << ch << " i a digit\n";
    else
        cout "THe character is special character\n";
}

