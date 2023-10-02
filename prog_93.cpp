#include <iostream>
using namespace std;
 
int main()
{
  int i,j;
  char c;
  int n=4;
 
  c='A';
  for(i=0;i<n;i++)
   {
   for(j=0;j<=i;j++)
   {
      if(c=='Z')
      break;
 
      cout<<c;
      c++;
   }
 
    cout<<endl;
    }
return 0;
 
}