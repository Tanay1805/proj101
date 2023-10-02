#include<iostream>

using namespace std;
int main()
{
   int num, prod=1;
   cout<<"Enter a Number: ";
   cin>>num;
   while(num>0)
   {
      prod = prod*num%10;;
      num=num/10;
   }
   cout<<"\nProduct of all digits of given number is: "<<prod;
   cout<<endl;
   return 0;
}