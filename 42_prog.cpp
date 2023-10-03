/*// A simple C++ program to compute sum of series 1/1! + 1/2! + .. + 1/n!
#include <iostream>
using namespace std;

// Utility function to find
int factorial(int n)
{
	int res = 1;
	for (int i=2; i<=n; i++)
	res *= i;
	return res;
}

// A Simple Function to return value of 1/1! + 1/2! + .. + 1/n!
double sum(int n)
{
	double sum = 0;
	for (int i = 1; i <= n; i++)
		sum += 1.0/factorial(i);
	return sum;
}

// Driver program to test above functions
int main()
{
	int n = 5;
	cout << sum(n);
	return 0;
}
*/

#include <iostream>

int main() {
    int N;
    double sum = 0.0;

    std::cout << "Enter the value of N: ";
    std::cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i % 2 == 1) {
            // If 'i' is odd, add 1/i to the sum
            sum += 1.0 / i;
        } else {
            // If 'i' is even, subtract 1/i from the sum
            sum -= 1.0 / i;
        }
    }

    std::cout << "Sum of the series: " << sum << std::endl;

    return 0;
}




