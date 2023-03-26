#include<iostream>
using namespace std;
int main()
{
    int i,n,f;
    i=1;
    f=1;
    cout<<"Enter a number: "<<endl;
    cin>> n ;
    while (i<=n)
    {
        f=f*i;
        i++;
    }
    cout<<"Factorial of this number is: "<< f << endl;
    return 0;
    
    
}