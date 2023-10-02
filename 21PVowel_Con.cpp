//Create a program to check if a character is a vowel or consonant
#include<iostream>
using namespace std;
int main()//main function
{    
     char c;
     cout<<"Enter a  character "<<endl;
     cin>>c;

    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
      c=='A'||c=='E'||c=='I'||c=='O'||c=='U')   //To check The condition 
      {
       cout<<"Letter " <<c<< " is Vowel";   ////condition true input is vowel
      }
    else 
      {
         cout<<"Letter " <<c<<  " is  consonant";   //condition false input is consonant
   
    }
 return 0;
}