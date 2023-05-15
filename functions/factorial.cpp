#include<iostream>
using namespace std;
int fac(int n);
int main()
{
    int n;
    fac(n);
    return 0;
}
int fac(int n)
{
    int i=1,f=1;
    cout<<"Enter a number: "<<endl;
    cin >> n;
    while (i<=n)
    {
        f=f*i;
        i++;
    }
    cout<<"Factorial of "<< n <<" is "<< f <<endl;
}