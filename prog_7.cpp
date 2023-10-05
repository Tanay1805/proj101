#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int sum = 0;

    // Find the sum of proper divisors of num
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to num
    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
