#include<iostream>
using namespace std;
int Q_R(int a, int b);
int main()
{
    int a,b;
    Q_R( a,b);
    return 0;
}
int Q_R(int a, int b)
{
    int quo,rem;
    cout<<"Enter dividend: \n";
    cin>> a ;
    cout<<"Enter the divisor: \n";
    cin>> b;
    quo= a/b;
    rem=a%b;
    cout<< "Quotient is "<< quo <<endl;
    cout<< "Remanider is "<< rem <<endl;
}

