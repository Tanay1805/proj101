//program to display the following pattern:
#include <iostream>
using namespace std;
int main()
{
   int i,j,n;
    cout << endl; 
    cout<<endl;
    cout << " Input number of rows: ";
    cin >> n;
    for(i=0;i<=n;i++)
    {
     /* print blank spaces */
     for(j=5;j<=n-i;j++)
	   cout<<" ";
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       cout<<j;
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  cout<<j;
     cout<<endl;
   }
} 