#include <iostream>
using namespace std;

int main() {
    // Define an array of integers
    int myArray[] = {1, 2, 3, 4, 5,6};

    // Determine the size of the array
    int arraySize = sizeof(myArray)/sizeof(myArray[0]);

    // Display the elements of the array
    cout << "Elements of the array:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Element " << i << ": " << myArray[i] << endl;//this line is for printing myArray by for condition till what we want to continue
    }

    return 0;
}
