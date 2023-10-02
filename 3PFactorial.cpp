//	Create a program to calculate the factorial of a number using recursion.
#include<iostream>
using namespace std;
 double Fact(int n)    //create a function called Fact to perform Factorial
{
    if (n>1) 
      {
        return n*Fact(n-1);   /*Formula of Factorial*/
      }
    else
      return 1;  // To show the factorial of 0! = 1
}
int main()  //main function
{
    int n;
    cout<<"Enter a Positive Integer"<<endl;
    cin>>n;
     if (n<0)  //condition if Number is less than 0.
       {
        cout<<"InValid Number"<<endl;
       }
     else
       {
        cout<<"The Factorial of the " <<n<< "! = "<<Fact(n)<<endl;
       }
    return 0;
}