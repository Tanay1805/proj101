#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n=5;//represents no of rows in pattern 
 
   for(i=n;i>=1;i--) //begins with 5 and continues till i as 1 
     {
         for(j=i;j<=n;j++) // this is for how many letters to be printed on each row
         {
             cout<<((char)(j+64));//  here we take j=1 so 1+64=65 ie A
         }
 
         cout<<endl;
     }
 
  return 0;
}
