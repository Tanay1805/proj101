// C++ program to print
// right triangle
#include <iostream>
using namespace std;

// Driver code
int main()
{
int n = 5;

// ith row has i elements
for(int i = 1; i <= n; i++)
{
	for(int j = 1; j <= i; j++)
	cout << "* ";
	cout << endl;
}

// C++ program to print inverted
// right triangle

{
int n = 4;

// ith row has n-i+1 elements
for(int i = 1; i <= n; i++)
{
	for(int j = 1; j <= n - i + 1; j++)
	cout << "* ";
	cout << endl;
}
return 0;
}

return 0;
}
 