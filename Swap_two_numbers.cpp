#include <iostream>
using namespace std;

int main()
{
    int a, b, swap;

    cout<<"Enter two numbers:\n";
    cin>> a >> b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap = a;
    a = b;
    b = swap;

    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}