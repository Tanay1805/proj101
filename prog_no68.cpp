#include<iostream>
using namespace std;
int n;
int power(int m)
{
    if(m==0){
        return 1 ;
    }
    return n * power(m-1);
}
int main()
{
    int m;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Enter a power ";
    cin>>m;
    int ans = power(m);
    cout<<ans <<endl;
    return 0;
}

