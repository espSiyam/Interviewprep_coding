#include<bits/stdc++.h>
using namespace std;

#define stacksize 100
int mystack[stacksize], top = -1;

void push(int value)
{
    if(top>=stacksize-1)
        cout<<"Stack overflow!\n";
    else
    {
        cout << "Push: " << value <<endl;
        mystack[++top] = value;
    }
}

void pop()
{
    if(top<0)
        cout << "stack underflow!\n";
    else
        top--;
}

void display()
{
    int i;
    for(i=0;i<=top;i++)
        cout << mystack[i]<<endl;
}

int main()
{
    push(1);
    push(11);
    pop();
    push(111);
    push(1111);
    push(11111);
    push(111111);
    pop();
    push(1111111);
    push(11111111);
    pop();
    display();
    return 0;
}
