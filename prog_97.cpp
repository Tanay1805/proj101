#include <iostream>

using namespace std;

int main() {
  int n; // The number of rows in the pattern
  int i,j;

  cout<<"Enter the no of lines needed: ";
  cin>>n;
  // Outer loop iterates over the rows of the pattern
  for (int i = 1; i <= n; i++) {

    for(j=i;j<n;j++)
    {
      cout<<" ";
    }
    // Inner loop iterates over the columns of the pattern
    for (int j = i; j < 2 * i - 1; j++) {
      cout <<   j;
    }

    // Inner loop iterates over the columns of the pattern in reverse order
    for (int j = 2 * i - 1; j > i - 1; j--) {
      cout <<   j;
    }

    cout << endl;
  }

  // Outer loop iterates over the rows of the pattern in reverse order
  for (int i = n - 1; i >= 1; i--) {

    for (j = 1; j <=n - i; j++)
        {
            // Printing spaces
            cout<<" ";
        }
    // Inner loop iterates over the columns of the pattern
    for (int j = i; j < 2 * i - 1; j++) {
      cout << j;
    }

    // Inner loop iterates over the columns of the pattern in reverse order
    for (int j = 2 * i - 1; j > i - 1; j--) {
      cout << j;
    }

    cout << endl;
  }

  return 0;
}