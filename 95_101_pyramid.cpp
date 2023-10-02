#include <iostream>
using namespace std;

int main()
{
    int rows, i, j;
    cout<<("Enter the number of rows: ");
    cin>>rows;
    
    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++)
    {
        // Inner loop to handle number of columns
        for (j = 1; j <= i; j++)
        { 
            cout<<j%2;
        }
        
        // Ending line after each row
        cout<<"\n";
    }
    return 0;
}

