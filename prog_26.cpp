//to calculate sum of natural num upto n
#include <iostream>
using namespace std;

int main()
{
    int n,i=1,sum=0;              //declaring variables n i and sum of data type integer
    cout << "Enter a number : ";      //to ask user to enter num
    cin >> n;                       //to take input from user and storing in n
    
    while(i<=n)                    //using while loop till value of n i is samller than equal to i
    
    {
        sum+=i;
        i++;
    }

    cout << sum;

    return 0;
}
