//Write a C++ program to find the sum of digits of a number until it becomes a single-digit number.
#include <iostream>
using namespace std;

int sumOfDigits(int n) 
{
  if (n < 10) 
  {
    return n;
  } 
  else 
  {
    int sum = 0;
    while (n > 0)
     {
      sum += n % 10;
      n /= 10;
     }
    return sumOfDigits(sum);
  }
}
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "The sum of digits of " << n << " is " << sumOfDigits(n) << endl;
  return 0;
}