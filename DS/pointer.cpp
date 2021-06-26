#include<iostream>
using namespace std;
int main()
{
    string food = "Pizza";
    string* ptr = &food;
    cout <<food<<endl;
    cout <<"Memory address: "<<&food<<endl;
    cout <<"Address by pointer: " <<ptr;
}
