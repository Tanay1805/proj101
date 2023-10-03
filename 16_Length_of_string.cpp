//program to find the length of string without using length function

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int i=0;
   int count=0;
   string characters; //because string is mentioned in the question as a parameter

   cout<<"\nEnter any string :: ";
   getline (cin,characters) ; // using getline function to include all types of input

   for(i=0; characters[i]; i++)
   {
        count++;
   }
   cout<<"\nLength of String  "<<characters<<"  is :: "<<count<<"\n";
   //cout << i << endl;
   return 0;
}
