#include<iostream>
using namespace std;
int max(int a, int b, int c);
int main()
{
    int a,b,c;
    max(a,b,c);
    return 0;
}
int max(int a, int b, int c)
{
     int  max;
    cout<<"Enter three numbers: "<<endl;
    cin >> a >> b >> c ;
    max=a;
    if (max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    cout<< "Maximum is "<< max <<endl;
}