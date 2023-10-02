#include <iostream>
using namespace std;

int main()
{
    int n,range;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Enter the number of multiples required : ";
    cin>>range;

    for(int i=1; i<= range; ++i)
    {
        cout<<n<<"*"<< i<<"="<<n*i<< endl;
    }
    return 0;
}
