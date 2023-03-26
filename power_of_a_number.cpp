#include<iostream>
using namespace std;
int main()
{
  int n,p,i,s;
     i=1;
     s=1;
     cout<<"Enter a number: "<<endl;
     cin >> n;
     cout<<"Enter the power of the number: "<<endl;
     cin>> p;
     while (i<=p)
     {
        s=s*n;
        i++;
     }
     cout<< s ;
     return 0;
     

}