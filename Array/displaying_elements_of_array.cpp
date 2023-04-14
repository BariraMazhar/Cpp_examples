#include<iostream>
 using namespace std;
 int main()
 {
    int arr[5],i;
    //input numbers in the array
    for ( i = 0; i <=4; i++)
    {
        cout<<"Enter a number: "<<endl;
        cin>> arr[i];
    }
    //displaying elements of array
    cout<<"Elments of array are:"<<endl;
    for ( i = 0; i <=4; i++)
    {
        cout<< arr[i] <<endl;
    }
    return 0;
    
    
 }