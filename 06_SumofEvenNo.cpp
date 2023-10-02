// program to calculate the sum of all even numbers between 1 and N.

/*#include <iostream>
using namespace std;

int main()
{
    int n,s=0;
    int i=1;

    cout<< "Enter the number upto which you want the number:";
    cin >> n;

    while (i <= n){
        if (i%2==0){
            s=s+i;
            ++i;
            }
    }
    cout<<"The sum for "<< n << " even natural numbers is " << s;
        
    
    
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int n,s=0;

    cout<< "Enter the number upto which you want the number:";
    cin >> n;
    
    for ( int i=1; i<=n; i++){
        if (i%2==0){
            s=s+i;
        }
   
    }
    cout<<"The sum for "<< n << " natural numbers is " << s;

    return 0;
}