#include <iostream>
#include <cmath>
//here we are going to perform mathemtical operations like sqrt().so we will need <math>
using namespace std;

int main() {
     //Quadratic eqn ax^2 + bx +c=0
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;      //here we are using float as it can take decimal upto 15 
    cout << "Enter coefficients a, b and c: ";                         //asking user to enter value for a b and c
    cin >> a >> b >> c;                                                //taking user input for a b and c
    discriminant = b*b - 4*a*c;                                        //discriminant is determinant which follows the formula according to maths ie. b^2-4ac
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);                       //this is the formula for finding roots of quadratic eqn
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);                                              //this is when roots are real and equal ie. b^2-4ac=0
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;                           //it is if roots are complex and different by finding real part and imaginary part
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
