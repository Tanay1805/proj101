//Create a program to calculate the power of a number using a loop.
#include <iostream>
using namespace std;
int main() 
{
    int power;
    float base, result = 1;

    cout << "Enter base and power respectively:  "<<endl;
    cin >> base >> power;

    cout << base << "^" << power << " = ";

    while (power != 0) //enter control loop.. 
    {
        result *= base;
        power--;
    }

    cout << result;
    
    return 0;
}
