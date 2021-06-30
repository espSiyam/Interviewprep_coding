#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(true)
    {
        bool isprime = true;
        cin >> n;
        if(n==1)
            cout << "smallest prime number is 2\n";
        for(i=2;i<=sqrt(n);i++)
        {

            if(n%i==0)
            {
                isprime = false;
                break;
            }
        }

        if(isprime)
            cout << n << " is a prime number\n";
        else
            cout << n << " is not a prime number\n";
        }

}
