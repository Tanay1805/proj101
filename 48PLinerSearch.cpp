//Write a C++ program to search for an element in an array using linear search.
#include <iostream>
using namespace std;
int main()
{
    int input[100], count, i, num;
       
    cout << "Enter Number of Elements in Array"<<endl;
    cin >> count;
     
    cout << "Enter " << count << " numbers "<<endl;
      
    // loop to store the number which user give's
    for(i = 0; i < count; i++)
    {
        cin >> input[i];
    }  
    cout << "Enter a number to serach in Array"<<endl;
    cin >> num;
      
    // search num in input Array from index 0 to element Count-1 
    for(i = 0; i < count; i++)
    {
        if(input[i] == num)
        {
            cout << "Element found at index " << i;
            break; 
        }
    }
      
    if(i ==  count)
    {
        cout  << "Element Not Present in Input Array"<<endl;
    }
 
    return 0;
}