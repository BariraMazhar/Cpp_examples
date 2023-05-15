#include <iostream>
using namespace std;


int palindrome(int n){
    int rev=0,r,m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10 ;
        rev = (rev * 10 ) + r ;
    }
    if (rev == m ){
        cout<<"It's Palindrome";
    }
    else{
        cout<<"It's not Palindrome";
    }
    
}

int main(){
    int n;
    cout<<"Enter the Values ot Check Palindrome: ";
    cin>>n;
    palindrome(n);
    return 0;
}