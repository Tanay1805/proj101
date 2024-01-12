#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    
    // Create a 2D array with the specified number of rows and columns
    int arr[rows][cols];
    
    // Input elements into the array
    cout << "Enter the elements of the array:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
    
    // Calculate the sum of elements in the main diagonal
    int diagonalSum = 0;
    for (int i = 0; i < rows && i < cols; ++i) {
        diagonalSum += arr[i][i];
    }
    
    cout << "The sum of elements in the main diagonal is: " << diagonalSum << std::endl;
    
    return 0;
}
