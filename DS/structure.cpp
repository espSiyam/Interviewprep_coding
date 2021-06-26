#include<iostream>
using namespace std;

struct Point {
    int x = 0;
    int y = 1;
};

int main()
{
    struct Point p1;
    cout << "Before: "<<endl;
    cout << p1.x<<endl;
    cout << p1.y<<endl;
    p1.x = 20;
    p1.y = 54;
    cout << "After: "<<endl;
    cout << p1.x<<endl;
    cout << p1.y<<endl;
}
