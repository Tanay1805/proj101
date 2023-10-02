#include <iostream>
using namespace std;

void ToH(int n,char src,char aux,char dest){
    //ToH for tower of hanoi
    //it takes 4 parameters 
    //n-no. of disks,next 3 are src,aux,dest are the names of pegs

    if(n==1)
    {
        //recursing function call 
        //if the n=1 no. of disk then it can be transfer fron src to destination directly.

        cout<<"Move disk"<< n <<"from"<< src <<"to"<< dest <<endl;

        return;
    }
    //if that is not a case no. of disks n are more
    //we have to recursely call ToH

    ToH(n-1,src,dest,aux);
    //n-1 -decrease in no. of disk
    //here the transfer will take from src to aux 
    //here dest peg act as aux
    cout<<"Move disk"<< n <<"from"<< src <<"to"<< dest <<endl;
    ToH(n-1,aux,src,dest);
    //n-1 - decrease in no. of disks
    //here transfer will take place from aux to dest
    // here src peg acts as sux peg.

}
int main()
{
    int n;
    cout<<"Enter no. of disks:";
    cin>>n;
    ToH(n,'A','B','C');
    //here we are calling function named ToH
    //here n for no. of disks
    //A for source ,B for aux, and C for destinaion

return 0;
}

