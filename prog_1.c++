//find the sum of n natural nums from 1 to n.
#include <iostream>
using namespace std;

int main()
{
    int n;      //declaring n variable of int type
    cout << "Enter a number : ";         //asking user to enter value
    cin >> n;                            //taking input fro user and storing it in n variable
    
    int sum=0;                          //taking sum as zero.
    
    for(int i=1;i<=n;i++)               //it is a for loop initiating with i as 1 and the loop will continue till i is equal to n
        sum+=i;
                                       //it will split and get on adding

    cout << sum;

    return 0;
}
