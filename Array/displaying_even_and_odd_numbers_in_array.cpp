#include<iostream>
using namespace std;
int main()
{
   int arr[10],i;
   for ( i = 0; i <=9; i++)
   {
     cout<<"Enter a number: "<<endl;
     cin>> arr[i];
   }
   for ( i = 0; i <=9; i++)
   {
       if (arr[i]%2==0)
       {
           cout<< arr[i]<<" is even"<<endl;
       }
       else
       {
           cout<< arr[i]<<" is odd."<<endl;
       }
       
   }
   return 0;
}