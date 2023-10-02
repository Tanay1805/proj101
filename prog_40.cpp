#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        long long factorial = 1;

        for (int i = 1; i <= n; ++i) {
            factorial = 1;
            for (int j = 1; j <= i; ++j) {
                factorial *= j;
            }
            std::cout << "Factorial of " << i << " is: " << factorial << std::endl;
        }
    }

    return 0;
}
