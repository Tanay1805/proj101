//program that prints the pattern of a right-angled triangle using nested loops.
#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: "; // taking input
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {  // to run program till rows
        for(int j = 1; j <= i; ++j) {   // for printing rows in the right angle program
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
