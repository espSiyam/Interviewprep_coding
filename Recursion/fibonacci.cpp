#include<iostream>
using namespace std;

int fibo(int n)
{
    cout << "n: " <<n<<endl;
    if(n==0)
    {
        cout << "n: " <<n<<endl;
        return 0;
    }
    if(n==1 || n==2)
    {
        cout << "n: " <<n<<endl;
        return 1;
    }

    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    fibo(5);
    for (int i = 0; i <5; i++)
    {
        cout<< "Fibnacci value: " <<fibo(i)<<" "<<endl;
    }
    return 0;
}
