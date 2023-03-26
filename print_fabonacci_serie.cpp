#include<iostream>
using namespace std;
int main()
{
 unsigned long next,last,sum,limit;
 int i;
 cout<<"Enter limit of serie: "<<endl;
 cin >> limit ;
 next=0;
 last=1;
 i=1;
 while (i<=limit)
 {
    cout<< last <<" ";
    sum=next+last;
    next=last;
    last=sum;
    i++;
 }
 return 0;

    
}