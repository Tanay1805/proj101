// sum of natural number using recurtion

#include<iostream>
using namespace std;

int add(int n);

int main() { // main function
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Sum =  " << add(n); // printing the sum

    return 0;
}

int add(int n) { // giving arguement
    if(n != 0)
        return n + add(n - 1);
    return 0;
}
