#include <iostream>
using namespace std;
   string str;
 int main(){
     cout<<"Enter a string"<<endl;
     cin>>str;
     string s2;
    for(int i=str.length()-1;i>=0;i--){
        s2=s2+str.at(i);    /*std::string::at can be used to extract characters by characters from a given string. 
It supports two different syntaxes both having similar parameters:
*/
    }
    cout<<"\n";
    cout<<"Original String : "+str;
    cout<<"\n";
    cout<<"Reverse  string : "+s2;
 
    return 0;

 }
