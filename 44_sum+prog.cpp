#include<iostream>
using namespace std;

int main() {
    int N;
    double sum = 0;
    double factorial = 1;

    cout << "Enter the value of N: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        factorial = 1;
        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }
        sum += static_cast<double>(i) / factorial;
    }

    cout << "Sum of the series is: " << sum << endl;

    return 0;
}
