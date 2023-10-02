#include <iostream>
using namespace std;

int main()
{
    int i; 
    int space; 
    int rows; 
    int k = 0;
    
    cout<<("Enter the number of rows: \n");
    cin>>rows;
    
    // Outer loop to handle number of rows
    for (i = 1; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            // Printing spaces
            cout<<("  ");
        }
        while (k != 2 * i - 1)
        {
            // Printing stars
            cout<<("* ");
            ++k;
        }
        // Ending line after each row
        cout<<("\n");
    }
    return 0;
}



