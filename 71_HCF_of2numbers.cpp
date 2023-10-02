// C++ program to find the HCF (Highest Common Factor) of two numbers using recursion.

#include <iostream>
using namespace std;

int getHCF(int a, int b)
{
  return b == 0 ? a : getHCF(b, a % b);
}

int main()
{
    int num1;
    int num2;
    int HCF;
    cout<<"Enter a number 1: ";
    cin>>num1;
     
    cout<<"Enter number 2: ";
    cin>>num2; 

    HCF = getHCF(num1, num2);

    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<HCF;

  return 0;
}