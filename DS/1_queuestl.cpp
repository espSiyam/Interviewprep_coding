#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> myqueue;

    myqueue.push(1);
    myqueue.push(11);
//    myqueue.pop();
    myqueue.push(111);
    myqueue.push(1111);
//    myqueue.pop();
    myqueue.push(11111);
    cout <<"The queue is: \n";
    while(!myqueue.empty())
    {
        cout << myqueue.front()<<endl;
        myqueue.pop();
    }


}
