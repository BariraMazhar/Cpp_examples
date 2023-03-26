#include<iostream>
using namespace std;
int main()
{
    int a,b,c,min;
    cout<<"Enter three numbers: "<<endl;
    cin>> a >>b >>c ;
    min=a;
    if (min>b)
    {
        min=b;
    }
    if (min>c)
    {
        min=c;
    }
    cout<<"Smallest number is "<<min << endl;
    return 0;

    
    

}