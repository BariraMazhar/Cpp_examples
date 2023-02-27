#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character:\n";
    cin>> c ;
    switch (c)
    {
    case 'a':
        cout<<" Vowel"<<endl;
        break;
    case 'A':
        cout<<"vowel"<<endl;
        break;
    case 'e':
        cout<<"vowel"<<endl;
        break;
    case 'E':
        cout<<"vowel"<<endl;
        break;
    case 'i':
        cout<<"Vowel"<<endl;
        break;
    case 'I':
        cout<<"vowel"<<endl;
        break;
    case 'o':
        cout<<"Vowel"<<endl;
        break;
    case 'O':
        cout<<"Vowel"<<endl;
        break;
    case 'u':
        cout<<"Vowel"<<endl;
        break;
    case 'U':
       cout<<"Vowel"<<endl;
       break;
    default:
       cout<<"consonant"<<endl;
        break;
    }
    return 0;
}