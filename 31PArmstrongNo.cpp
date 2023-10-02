//Create a program to check if a number is Armstrong using a while loop.
#include<iostream>
using namespace std;
int main ()
{
    int num, temp, rem, sum = 0;
    cout << "Enter number to be checked : "<<endl;
    cin >> num;
    temp = num;
    while (temp != 0)//if temperory is not equal 0 than loop start performing
    {
        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp = temp / 10;
    }
    if (sum == num) 
        cout << num << " is an Armstrong number.  "<<endl;
    else
        cout<< num << " is not an Armstrong number. "<<endl;
    return 0;
}