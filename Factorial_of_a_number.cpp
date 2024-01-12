#include <iostream>
#include <vector>
using namespace std;
// Initialize a vector to store computed factorials
 vector<long long> factorialMemoization;

// Function to compute the factorial of a number using memoization
long long factorial(int n) {
    // Base case: 0! and 1! are both 1
    if (n <= 1) {
        return 1;
    }

    // Check if the factorial for 'n' has already been computed
    if (n < factorialMemoization.size() && factorialMemoization[n] != 0) {
        return factorialMemoization[n];
    }

    // Calculate the factorial recursively
    long long result = n * factorial(n - 1);

    // Store the computed factorial in the memoization array
    if (n < factorialMemoization.size()) {
        factorialMemoization[n] = result;
    } else {
        factorialMemoization.push_back(result);
    }

    return result;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is undefined for negative numbers." << endl;
    } else {
        long long result = factorial(n);
        cout << "Factorial of " << n << " is " << result <<endl;
    }

    return 0;
}
