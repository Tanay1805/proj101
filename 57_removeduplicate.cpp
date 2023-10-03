// C++ program to remove duplicate elements in an array 
#include<iostream>
using namespace std;
int main ()


{

    //declaring the array size and variables
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;

    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++) // for running the statement will nth element
        cin >> A[i];  
          
    for (i = 0; i < n; i++) //to check whether the elements are the same
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "Repeated elements after deletion : ";
    for (i = 0; i < k; i++)  // for displaying the elements after duplication ends
        cout << B[i] << " ";
    return 0;
}
