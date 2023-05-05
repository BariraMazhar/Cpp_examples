  #include <iostream>
using namespace std;
int main() 
{
          int arr[5],n,num,sum;
         for(  int i = 0; i <5; i++)
            {
              cout<<"Enter a number: "<<endl;
              cin>> arr[i];
            }
             for ( int j= 0; j<5; j++)
               {
                 num=arr[j];
                 sum=0;
                 while (num>0)
                    {
                          n=num%10;
                          sum+= (n*n*n);
                           num/=10;
                    }
                
         
               if (sum==arr[j])
                 cout<< arr[j] << " is an  Armstrong number"<<endl;
               else
                cout<< arr[j] <<" is not an Armstrong number"<<endl;
            }
 
    return 0;
    
}