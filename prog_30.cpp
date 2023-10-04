#include <iostream>
using namespace std;

int main() {
    int num, product = 1;

    cout << "Enter an integer: ";
    cin >> num;

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        int digit = num % 10;  // Extract the last digit
        product *= digit;     // Multiply the digit with the product
        num /= 10;            // Remove the last digit
    }

    cout << "The product of the digits is: " << product << endl;

    return 0;
}
