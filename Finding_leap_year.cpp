#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year: "<<endl;
    cin>> year ;
    if (year%400==0)
    {
        cout<< year <<" is leap."<< endl;
    }
    else if (year%100==0)
    {
        cout<< year << " is leap."<< endl;
    }
    else
    {
        cout<< year << " is not leap."<<endl;
    }
    return 0;
    
}