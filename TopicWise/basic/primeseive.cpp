#include<iostream>
using namespace std;
#define ll long long

void prime_seive(int *p)
{
    for(int i=3;i<=100000;i+=2)
        p[i]=1;

    for(ll i=3;i<=100000;i+=2){
        if(p[i]==1){
            for (ll j=i*i ; j<=100000; j+=i)
                p[j]=0;
        }
    }
    p[0]=p[1]=0;
    p[2]=1;
}

int main(){
    int n;
    cin >> n;
    int p[100000] = {};

    prime_seive(p);
    for(int i=0;i<n;i++){
        if(p[i]==1){
            cout << i << " is a prime number\n";
        }
    }
}
