//Define a program that calculates the sum of digits of a number using recursion
#include <iostream>
using namespace std;
int main() 
{  
  int n ;
  cout << "Enter a number: "<<endl;
  cin >> n;
  int sum = 0;
  while (n > 0)
   {
    sum += n % 10;
    n /= 10;
   }
  cout << "The sum of digits is " << sum << endl;

  return 0;
}