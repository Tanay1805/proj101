//Define an array and find the second largest element in it.
#include <iostream>
using namespace std;
int main() 
{
    const int size =5 ; // Change this value to match the size of your array
    int arr[size];

    // Input elements into the array
      cout << "Enter " << size << " integers: "<<endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; ++i)
     {
        if (arr[i] > largest)
         {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }

    cout << "The second largest element in the array is: " << secondLargest << endl;

    return 0;
}