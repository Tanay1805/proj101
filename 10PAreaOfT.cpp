//Implement a program to calculate the area of a triangle given its base and height.
#include<iostream>
using namespace std;

double AreaOfT(float base ,float height )//create a function to perform area of triangle
{
   return ( 0.5 * base * height );
}
int main()  //Main Function
{
  float b,h ;

  cout<<"Enter the Base of Triangle"<<endl;
  cin>>b;
  cout<<"Enter The Height of Triangle"<<endl;
  cin>>h;

  cout<<"The Area Of The Triangle is : "<<AreaOfT(b,h)<<endl;/* function call */
}