/*// Program to convert temperature from Celsius to Fahrenheit and vice versa.
#include <iostream>
using namespace std;

int main(){
    int n;
    float Celsius;
    float Fahrenheit;

    cout<< "Do you want to convert (1-Celsius to F / 2-Fahrenheit to C):  "; // users can have option to chose(1/2) 
    cin>>n;
     if(n==1){
        cout<<"Enter Celsius (in Degrees): ";
        cin>>Celsius;

        Fahrenheit = (1.8 * Celsius) + 32;   // formula for celsius to degree
        cout<<"The temperature in Fahrenheit is "<< Fahrenheit<<" F";
     }
     else{
        cout<<"Enter Fahrenheit (in Degre F): ";
        cin>>Fahrenheit;

        Celsius = (Fahrenheit - 32) / 32;  // formula for fahrenheit to celsius
        cout<<"The temperature in Celsius is "<<Celsius<<" C";
     }    

    return 0;
}
*/
/*// not a leap year if divisible by 100
  // but not divisible by 400
  else if (year % 100 == 0) {
    cout << year << " is not a leap year.";*/
  
  // leap year if not divisible by 100
  // but divisible by 4

#include <iostream>
using namespace std;

int main() {

  int year;
  cout << "Enter a year: ";
  cin >> year;

  // leap year if perfectly divisible by 400
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






