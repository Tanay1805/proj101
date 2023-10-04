//all possible permutations of a string

//This is a C++ Program to Permute All Letters Of An Input String.
#include <iostream>
#include <string>
//#include <algorithm>
 
using namespace std;
void permute (string temp_str, int start, int end) // function to generate permutations of a string
{ //which is a recursive function responsible for generating and printing all permutations of the input string.
  int i;
  if (start == end){  //defining the start and end of the given string,The current starting index for generating permutations.
    cout << temp_str << " ";
  }
  else{
    for (int i = start; i < temp_str.length (); ++i){  // using length function to separetly index the array for further processing
      swap (temp_str[start], temp_str[i]);
      permute (temp_str, start + 1, end); // functiion calls
      swap (temp_str[start], temp_str[i]);
    } // start equals end, it means that a complete permutation has been generated, so the temp_str is printed.
//Otherwise, a loop runs from start to the end of the string.
//It swaps characters at positions start and i in temp_str.
//The permute function is then called recursively with the updated temp_str and start incremented by 1.
//After the recursive call, the characters are swapped back to their original positions to explore other permutations.
  }
}
int main()
{
  string input_str;
  bool flag = false;  // flagging the flow of the program
  cout << "Enter String : ";
  cin >> input_str;
  for (int i = 0; i < input_str.length () - 1; ++i)
  {
    if (input_str[i] == input_str[i + 1])
    {
    flag = true;
    break;
    }
    else {       // control statement to dictate the flow of execution
      flag = false;
      break;
    }
  }
  if (flag)
  {
    cout << "The permutation of " << input_str << " is : " << input_str << endl;// input the numbers
  }
  else 
  {
    cout << "The permutations of " << input_str << " are : " << endl;
    permute (input_str, 0, input_str.length () - 1); //  function call to display
  }
  cout << endl;
  return 0;
}
