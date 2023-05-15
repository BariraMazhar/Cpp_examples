#include <iostream>
using namespace std;

int main() {
   char letter;
   int res;

   cout << "Enter a letter: ";
   cin >> letter;

   if (letter >= 'A' && letter <= 'Z')
    {
      res = 0;
    } 
   else
    {
      res = 1;
    }

   cout << "Answer is: " << res << "\n";

   return 0;
}









