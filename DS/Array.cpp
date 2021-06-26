#include<iostream>
using namespace std;

int main()
{
    int arrsize = 5, index,i,j;
    int age[arrsize];

    cout <<"Input 5 elements:\n";
    for(i=0;i<arrsize;i++)
        cin >>age[i];
    cout << "Input the index from 0-4:\n";
    cin >> index;
    while(index<arrsize-1)
    {
        age[index] = age[index+1];
        index++;
    }
    arrsize = arrsize-1;
    for(i=0;i<arrsize;i++)
        cout << age[i]<<" ";
}
