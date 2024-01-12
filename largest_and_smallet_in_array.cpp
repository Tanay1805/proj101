#include "iostream"
#include "algorithm"
using namespace std;
int main() {
    int size ;
    cout<<"Enter the size of an array";
    cin>>size;
    int arr[size];
    cout<<"Enter the number in array ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n";
    cout<<"Input array :";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<" ";
    sort(arr , arr+size);
    cout<<"\n";
    cout<<"The sorted array: ";
     for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    cout<<endl;
   cout<<"The smallest number in array: " ;
   cout<<arr[0];
   cout<<"\n";
   cout<<"The largest number in array: " ;
   cout<<arr[size-1];
   cout<<"\n";
   return 0;
}
