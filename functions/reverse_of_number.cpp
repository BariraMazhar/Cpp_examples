#include<iostream>
using namespace std;
int reverse(int n);
int main()
{
      reverse(567);
      return 0;
}
int reverse(int n)
{
    int a,b;
    cout<<"Enter a 3-digit number: "<<endl;
    cin>> n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    cout<<"Reverse of given number is "<<a<<b<<n<<endl;
}