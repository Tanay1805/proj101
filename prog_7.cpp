#include <iostream>

using namespace std;

bool isNaturalNumber(int num) {
  return num >= 1;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (isNaturalNumber(num)) {
    cout << num << " is a natural number." << endl;
  } else {
    cout << num << " is not a natural number." << endl;
  }

  return 0;
}
