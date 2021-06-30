#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int i, counting;
    cin >> name;
    for(i=0; name[i]!='\0'; i++)
    {
        counting++;
    }
    cout << "Number of elements is: "<<i <<endl;
    while(name[i])
    {
        i++;
    }
    cout << "Number of elements is: "<<i <<endl;
}

