// sum of natural number using recurtion

#include <iostream>
using namespace std;
int sum(int n) {
   if(n == 0)
   return n;
   else
   return n + sum(n-1);
}
int main() {
   int n = 10;
   cout<<"Sum of first "<<n<<" natural numbers is "<<sum(n);
   return 0;
}