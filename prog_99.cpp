#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n=5;//setting no of n to 5 which is no of rows in our pattern
 
  for(i=n;i>=1;i--) //loop will begin from 5 and continue till it reaches 1
     {
         for(j=1;j<=i;j++) //behins j as 1 and continues as long as j is less than or equal to current value if i
         //this is for how many letters in each row
         {
             cout<<((char)(i+64));// it is when i as 5 i+64 ie.5+65=69 i.e E according to capital letters in ASCII table
         }
 
         cout<<endl;
     }
 
  return 0;
}
