//Write a program to print all natural numbers from 1 to N using a while loop.
#include<iostream>
using namespace std;
int main()    //main function
{
    int n;
    cout<<"Enter The limit"<<endl;
    cin>>n;
     
    cout<<"First " <<n<< " Natural Number's are  ";
      // iterate from 1 to n and print the number
    int i=1;
     while (i<=n)    // entry loop to execute the give condition
       {
        cout<<i<<" ";
        i++;
       }
 return 0;
}