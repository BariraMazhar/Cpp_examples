#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,sum,num;
    cout<<"Enter a 3-digit number: "<<endl;
    cin>> n ;
    num=n;
    a=n/100;
    n=n%100;
    b=n/10;
    n=n%10;
    cout<<" Reverse is "<< n << b << a << endl;
    sum= (n*100)+(b*10)+(a);
    if (sum==num)
    {
        cout<<"The number is a palindromic number."<<endl;
    }
    else
        cout<<"The number is not a palindromic number."<<endl;
    
    return 0;


}