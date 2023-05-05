#include<iostream>
using namespace std;
int main()
{
   int arr[5],i,j,k,p=0;
   for ( i = 0; i <=4; i++)
   {
     cout<<"Enter a number: "<<endl;
     cin>> arr[i];
   }
   for ( k= 0; k<=4; k++)
   {
      for ( j= 2; j<=arr[k]/2; j++)
      {
          if (arr[k]%j==0)
          {
            p++;
            break;
          }
         else
          {
            p=0;  
          }
      }
          if (p!=0)
          {
            cout<<arr[k]<<" is a Composite number."<<endl;
          }
          else
          {
              cout<< arr[k] <<" is a Prime number."<<endl;
          }
   }
    return 0;
}