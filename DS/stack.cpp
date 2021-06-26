#include<iostream>
using namespace std;

#define stacksize 100
int mystack[stacksize], top = -1;

void push(int value)
{
    if(top>=stacksize-1)
        cout<<"stack overflow.";
    else
    {
        cout <<"Push: " << value <<endl;
        mystack[++top] = value;
    }
}

void pop()
{
    cout << "\n";
    if(top<0)
        cout<<"Stack underflow";
    else
    {
        cout <<mystack[top] << " is popped from the stack!"<<endl;
        top--;
    }
}

void displayStack()
{
    cout << "\n";
    int i;
    for(i=top;i>=0;i--)
        cout <<mystack[i]<<endl;
}

int main()
{
    push(5);
    push(50);
    push(500);
    push(5000);
    pop();
    push(500000);
    displayStack();
}
