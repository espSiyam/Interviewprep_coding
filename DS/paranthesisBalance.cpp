#include<bits/stdc++.h>
using namespace std;

bool ParanBalance(string exp)
{
    stack<char> S;
    for(i=0;i<exp.length();i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            S.push(exp[i]);
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
    }
}
int main()
{
    string expression;
    cout <<"Enter the expression: ";
    cin >> expression;
    if(ParanBalance(expression))
        cout <<"Balanced\n";
    else
        cout <<"Not Balanced\n";
}
