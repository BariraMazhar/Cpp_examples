#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, dis, rPart, iPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    dis = b*b - 4*a*c;
    
    if (dis > 0) {
        x1 = (-b + sqrt(dis)) / (2*a);
        x2 = (-b - sqrt(dis)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (dis == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        rPart = -b/(2*a);
        iPart =sqrt(-dis)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << rPart << "+" << iPart << "i" << endl;
        cout << "x2 = " << rPart << "-" << iPart << "i" << endl;
    }

    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 