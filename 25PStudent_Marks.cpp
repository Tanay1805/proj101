//	Implement a program that determines the grade of a student based on their marks
#include<iostream>
using namespace std;
int main()
{
  float Marks;
  cout<<"Enter Your Marks"<<endl;
  cin>>Marks;
  if (Marks>=90)   //Condtion Statement to check the condtion acc to marks.
  {
    cout<<"Congrats You Got A Grade"<<endl;
  }
  else if (Marks>=70 && Marks<90) //if marks are between this range then print this code.
  {
    cout<<"Congrats You Got B Grade"<<endl;
  }
  else if (Marks>=35 && Marks<70) //if marks are between this range then print this code.
  {
    cout<<"Congrats You Got C Grade"<<endl;
  }
  else // if all condtion are false then by default print this code.
  {
    cout<<"You are Fail (Better Luck Next Time)";
  }
return 0;
}