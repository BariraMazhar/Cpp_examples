#include<iostream>
using namespace std;
int main()
{
    int n,p=0;
    cout<<"Enter a number: "<<endl;
    cin>> n;
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            p++;
        }
        
    }
    if (p!=0)
    {
        cout<<"Composite number"<<endl;
    }
    else
    cout<<"Prime Number"<<endl;
    return 0;
    
    
}