#include<iostream>
using namespace std;
int main()
{
    int i,p;
    i=1;
    p=1;
    while (i<=5)
    {
        p=p*i;
        i++;
    }
    cout<<"Product of first 5 numbers is "<< p <<endl;
    return 0;
    
    
}