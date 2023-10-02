//program to print the following pattern:
#include <iostream>
using namespace std;

int main() 
{
  int size = 5;
  // outer loop
  for (int i = 0; i < size; i++) 
  {
    // inner loop
    for (int j = 0; j < size; j++)
     {
      // print only star in first and last row
      if (i == 0 || i == size - 1) 
      {
        cout << "*";
      }
      else {
        // print star only at first and second position row
        if (j == 0 || j == size - 3) 
        {
          cout << "*";
        }
        else 
        {
          cout << " ";
        }
      }
    }
    cout <<endl;
  }
  return 0;
}