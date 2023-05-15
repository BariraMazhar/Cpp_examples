#include<iostream>
using namespace std;
int armstrong(int n);
int main()
{
    int n;
    armstrong(n);
    return 0;
}
int armstrong(int n)
{
     int a,b,num,sum;
    cout<<"Enter a Number: "<<endl;
    cin>> n;
    num=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    sum=(a*a*a)+(b*b*b)+(n*n*n);
    if (num==sum)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<" Not an Armstrong number"<<endl;
    }
}