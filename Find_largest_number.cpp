#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: \n";
    cin>> a >> b >> c;
    if (a>=b && a>=c)
    {
        cout<< a << " is lARGEST. "<<endl;
    }
    else if (b>=a && b>=c)
    {
        cout<< b <<" is largest."<<endl;
    }
    else
    {
        cout<< c <<" is largest."<<endl;
    }
    return 0;
    
    
}