#include <iostream>
using namespace std;

int main()
{
    float n1,n2;
    int op;

    cout<<"enter the first number:";
    cin>> n1;

    cout<<"enter the second number:";
    cin>>n2;

    cout<<"enter the operator number :";//for add-1 for sub-2 for division-3 and for multiply-4
    cin>>op;
    switch(op)
    {
        case 1://for addition
        cout<<"sum:"<<n1+n2;
        break;

        case 2://for subtraction
        cout<<"sub:"<<n1-n2;
        break;

        case 3://for division
        cout<<"Div:"<<n1/n2;
        break;

        case 4://for multiplication
        cout<<"Multiply:"<<n1*n2;
        break;


    }

   return 0;

}

