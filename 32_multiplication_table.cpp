//table tp print multipliation tabloes for a given number
#include <iostream>
using namespace std;

int main(){
     int n;
     int a;

     cout<< "Enter the number:";
     cin >> n;

     cout<<"Enter number upto which you want the multiplication table: ";
     cin>>a; //to print numbers upto the given number 

     for (int i=1; i<=a; i++){  // to  run i till the inputted value

        cout<< n <<" x " << i << "=" << n*i<<"\n"; // to print the multiplication table

        
     }

     return 0;
     
}
