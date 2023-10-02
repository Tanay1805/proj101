/*"Create a C++ program to print the following pattern:

1
212
32123
4321234"*/  // multiline comment
#include <iostream>
using namespace std;

int main(){

    int i,j,row;

    cout<<("Enter number of rows: ");
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }

        for(j=2;j<=i;j++)
        {
            cout<<j;
        }
        printf("\n");
    }

}