#include<iostream>
using namespace std;
float temp(float f);
int main()
{
     float f;
     temp(f);
     return 0;
}
float temp(float f)
{
       float c;
       cout<<"Enter temperature in farenheit: "<<endl;
       cin>> f;
       c=(f-32)*9/5;
       cout<<"Temperature in celcius is "<< c <<endl;
}