#include <iostream>

using namespace std;

int main() {
  int n, sum = 0, i = 2;
  cout << "Enter the upper limit: ";
  cin >> n;

  while (i <= n) {
    sum += i;
    i += 2;
  }

  cout << "The sum of even numbers from 1 to " << n << " is " << sum << endl;

  return 0;
}
