#include<iostream>
using namespace std;
void swapp(int& first,int& second)
{
    int temp = first;
    first = second;
    second = temp;
}
int main()
{
    int a = 2, b= 3;
    cout <<"Before swapping a and b is: "<<a<<" " <<b <<endl;
    swapp(a,b);
    cout <<"After swapping a and b is: "<<a<<" "<<b<<endl;
}
