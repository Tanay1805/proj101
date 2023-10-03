//  segregate even and odd numbers.
#include <iostream>
using namespace std;

// Function to rearrange the array in given way.
void rearrangeEvenAndOdd(int arr[], int n)
{
	// Variables
	int j = -1;

	// Quick sort method
	for (int i = 0; i < n; i++) {

		// If array of element
		// is odd then swap
		if (arr[i] % 2 == 0) {

			// increment j by one
			j++;

			// swap the element
			swap(arr[i], arr[j]);
		}
	}
}



int main()
{
    int i,j,num;
	//int arr[num];
	cout << " Enter the size of the array: ";  
    cin >>num ; //n=x  i=y
    int arr[num];  
    // use for loop to enter the numbers   
    for (i = 0; i < num; i++)  
    {  
        cout << " Enter the element " << i+1 << ": ";  
        cin >> arr[i];  
    }
	
	int n = sizeof(arr) / sizeof(arr[0]);

	rearrangeEvenAndOdd(arr, n);// function called and arguement given


	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

    return 0;
}

