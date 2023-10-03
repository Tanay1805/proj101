#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;

  // leap year if perfectly divisible by 400 also if the year is the year is divisble by 100
  // because if year is divisible by 100 it is not a leap year
  if (year % 400 == 0 && year % 100 == 0) {
    cout << year << " is a leap year.";
  }


  else if (year % 4 == 0){
    cout << year << " is a leap year.";
  }
  // all other years are not leap years
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}






