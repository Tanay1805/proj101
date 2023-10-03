#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

int main()
 {
    // Create an array of strings
    string strings[] = {"banana", "apple", "grape", "orange", "kiwi"};

    // Calculate the size of the array
    int arraySize = sizeof(strings) / sizeof(strings[0]);

    // Sort the array in alphabetical order
   sort(strings, strings + arraySize);

    // Display the sorted strings
       cout << "Sorted Strings:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << strings[i] << endl;
    }

    return 0;
}