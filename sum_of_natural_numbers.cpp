#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    sum=0;
    for ( n = 1; n<=10; n++)
    {
        cout<< n <<endl;
        sum=sum+n;
    }
    cout<<"Sum is "<< sum <<endl;
    return 0;
    
}