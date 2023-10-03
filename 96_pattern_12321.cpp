/*"Create a C++ program to print the following pattern:

    1
   121
  12321
 1234321
123454321"*/
#include <iostream>  
using namespace std;  
int main()  
{ 
    int i,j,k,l,n;    
    cout<<"Enter the Range=";    
    cin>>n;    
    for(i=1;i<=n;i++)    
    {
        
    for(k=1;k<=i;k++)    //for incrementing values
    {  
        cout<<k;    
    }    
    for(l=i-1;l>=1;l--)  // for generating the vnumbers backwards  
    {
        cout<<l;    
    }    
    cout<<"\n";    
    }    
return 0;  
}  
