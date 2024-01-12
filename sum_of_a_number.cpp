#include <iostream>
using namespace std;
int main() {
    int number, digit, sum = 0;

  
    cout << "Enter an integer: ";
    cin >> number;

     
    number = abs(number);

   
    do {
        digit = number % 10;
        sum += digit;       
        number /= 10;      
    } while (number != 0);

   
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
