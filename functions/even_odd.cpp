#include<iostream>
using namespace std;
int even_odd( int n);
int main()
{
    int n;
    
    //checking even or odd no. using separate function
    even_odd( 45);
    return 0;
}

int even_odd(int n)
{
             if ( n % 2 == 0)
        {
            cout << n << " is even."<<endl;
        }
        else
        {
            cout << n << " is odd."<<endl;
         }
}