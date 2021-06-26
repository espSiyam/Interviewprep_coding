#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int& refer = x;
    cout << x <<" " << refer<<endl;
    cout<< "Changing the values: ";
    refer = 20;
    cout << x <<endl;
    x = 30;
    cout <<"Refer: " << refer <<endl;
    return 0;
}
