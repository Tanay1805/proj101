#include <iostream>
using namespace std;
 void great(int x ,int y,int z){
    
   if (x >= y && x >= z) {
        cout << "The largest number is: " << x << endl;
    } else if (y >= x && y >= z) {
        cout << "The largest number is: " << y << endl;
    } else {
        cout << "The largest number is: " << z << endl;
    }
}
int main() {

    int num1, num2, num3;
  
    cout << "Enter three numbers:\n ";
    cin >> num1 >> num2 >> num3;
    great( num1, num2, num3);

    return 0;
}
