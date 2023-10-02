#include <iostream>
using namespace std;
 int squr(int n){
    return n*n;
 }
int cube(int n){
    return n*n*n;
 }
int main()
{
   int n ;
   cout<< "Enter a number : ";
   cin>>n;
   int a =squr(n);
   int b = cube(n);
   cout<<"The square of number: ";
   cout<<a;
   cout<<"\n";    //FOR SPACE.
   cout<<"The cube of number: " ;
   cout<<b;
   cout<<"\n";
    return 0;
}