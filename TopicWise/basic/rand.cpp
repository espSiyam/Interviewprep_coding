#include<iostream>
using namespace std;
int main()
{
    int i, num;
    for(i=0;i<10;i++)
    {
        num = rand()%3;
        cout <<" "<<num <<" ";
    }
    cout << "\n";
}
