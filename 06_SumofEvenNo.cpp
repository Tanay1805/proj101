// program to calculate the sum of all even numbers between 1 and N.

#include <iostream>
using namespace std;

int main()
{
    int n,s=0; // initialising sum as 0

    cout<< "Enter the number upto which you want the number:";
    cin >> n;
    
    for ( int i=1; i<=n; i++){ //for making the sum to n number
        if (i%2==0){ // to make only even numbers pass through
            s=s+i;
        }
   
    }
    cout<<"The sum for "<< n << " natural numbers is " << s; //to print the final output

    return 0;
}
