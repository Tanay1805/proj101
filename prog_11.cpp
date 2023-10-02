#include <iostream>

using namespace std;

int main() {
  // Declare variables
  float temperature, converted_temperature;
  char conversion_direction;

  // Prompt the user to enter the temperature and conversion direction
  cout << "Enter the temperature to convert: ";
  cin >> temperature;
  cout << "Enter the conversion direction (C to F or F to C): ";
  cin >> conversion_direction;

  // Convert the temperature based on the conversion direction|
  //(temperature - 32.0) * 5.0 / 9.0;
  if (conversion_direction == 'C') {
    converted_temperature = (temperature * 9.0) / 5.0 + 32.0;
  } else if (conversion_direction == 'F') {
    converted_temperature = (temperature - 32.0) * 5.0 / 9.0;
  } else {
    cout << "Invalid conversion direction." << endl;
    return 0;
  }

  // Print the converted temperature
  cout << "The converted temperature is: " << converted_temperature << endl;

  return 0;
}
