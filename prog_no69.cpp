#include<iostream>
using namespace std;

int fib(int n){
    if (n==0||n==1)
    {
      return n;
    }
    return fib(n-1)+fib(n-2);
    
}
int main()
{
    int n;
    int n1=0;
    int n2=1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    cout<<n1;
    cout<<n2;
    for (int i = 2; i <=n; i++)
    {
        cout<<fib(i);
    }
    

    return 0;
}
