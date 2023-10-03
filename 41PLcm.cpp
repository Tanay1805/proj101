//Write a program to find the LCM of two numbers using nested loops.
#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2, max;

    cout << "Enter first number: ";
    cin>>n1;

    cout<<"Enter second number: ";
    cin>>n2;
    
    // do while loop is used
    do
    {
        if (max % n1 == 0 && max % n2 == 0) // comparing two values
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max; // incrementing values
    } while (true);
    
    return 0;
}