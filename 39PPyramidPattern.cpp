//Implement a program that generates a pattern of a pyramid using nested loops.
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

  for (int i = 1; n >=i; i++) 
  {
    for (int j = 1; i >=j; j++) 
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}