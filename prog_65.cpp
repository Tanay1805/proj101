#include <iostream>
using namespace std;

// Get the size m and n
#define m 4
#define n 4

// Function to calculate sum of each row
void row_sum(int arr[m][n])
{

	int i,j,sum = 0;

	cout << "\nFinding Sum of each row:\n\n";

	// finding the row sum
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {

			// Add the element
			sum = sum + arr[i][j];
		}

		// Print the row sum
		cout
			<< "Sum of the row "
			<< i << " = " << sum
			<< endl;

		
	
		// Reset the sum so get ready for sum of next row
		sum = 0;
	}
}


int main()
{

	int i,j;
	int arr[m][n];

	// Get the matrix elements
	int x = 1;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			arr[i][j] = x++;

	// Get each row sum
	row_sum(arr);

	
	return 0;
}
