#include<iostream>
using namespace std;
int min(int a, int b, int c);
int main()
{
    int a,b,c;
    min(a,b,c);
    return 0;
}
int min(int a, int b, int c)
{
     int  min;
    cout<<"Enter three numbers: "<<endl;
    cin >> a >> b >> c ;
       min=a;
    if (min>b)
    {
        min=b;
    }
    if(min>c)
    {
        min=c;
    }
    cout<< "Minimum is "<< min <<endl;
}