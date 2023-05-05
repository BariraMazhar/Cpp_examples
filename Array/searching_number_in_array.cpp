#include<iostream>
using namespace std;
int main()
{
   int arr[7],i,num,loc;
   for ( i = 0; i <=6; i++)
   {
     cout<<"Enter a number: "<<endl;
     cin>> arr[i];
   }
   cout<<"Enter the number to find in the elements of array: "<<endl;
   cin>> num;
   for ( i = 0; i <=6; i++)
   {
      if (arr[i]==num)
      {
         
         cout<<"Given number is on index "<<i <<" of the array."<<endl;
          break; 
      }  
   }
   if (arr[i]!=num)
   {
         cout<<"Number not found"<<endl;
   }
   
          return 0;
}