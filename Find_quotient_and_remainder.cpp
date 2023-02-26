
#include<iostream>
using namespace std;
int main()
{
    int a,b,quo,rem;
    cout<<"Enter dividend: \n";
    cin>> a ;
    cout<<"Enter the divisor: \n";
    cin>> b;
    quo= a/b;
    rem=a%b;
    cout<< "Quotient is "<< quo <<endl;
    cout<< "Remanider is "<< rem <<endl;
    return 0;
}