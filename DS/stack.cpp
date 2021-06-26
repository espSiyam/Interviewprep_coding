#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> myStack;
    myStack.push(32);
    myStack.push(13);
    myStack.push(64);
    myStack.push(421);
    myStack.pop();
    cout << myStack.size();
}
