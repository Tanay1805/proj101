//Write a program to concatenate two strings without using the strcat function.
#include <iostream>
#include <string> /*string is library file You can do many things with <string>, like:Combining two words together (concatenation).*/
using namespace std;                                                               //Finding out how long a word is (the number of characters).
int main()                                                                         //Changing a word into uppercase or lowercase.
 {
  string str1 = "Hello";
  string str2 = "World";

  // Concatenate the two strings using the + operator
  string str3 = str1 + str2;

  // Print the concatenated string
  cout << str3 << endl;

  return 0;
}