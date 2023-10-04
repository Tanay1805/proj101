// C++ program to find K'th smallest element
#include <iostream>
using namespace std;

// Function to return K'th smallest element in a given array
int kthSmallest(int arr[], int N, int K)
{
	// Sort the given array
	sort(arr, arr + N);

	// Return k'th element in the sorted array to arrange elements in ascending order.
	return arr[K - 1];
}


int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int N = sizeof(arr) / sizeof(arr[0]), K = 2;

	// Function call
	cout << "K'th smallest element is "
		<< kthSmallest(arr, N, K);
	return 0;
}

