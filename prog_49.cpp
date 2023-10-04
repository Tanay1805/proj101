#include <iostream>
using namespace std;

// Main function to run the program
int main() 
{ 
    int arr[] = {10, 30, 10, 20, 10, 20, 30, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int visited[n];//here you are going to keep track of things it will be list with blank space


    for(int i=0; i<n; i++){
        //here n is array size
       //loop will continue as long as i is smaller than n
       //by this for loop you are going to look at each thing in our main array one by one
       //here in if while checking for ech things to see any new thing arrives so it is to check if we already have or not

        if(visited[i]!=1){
           int count = 1;//if we get something new 
           for(int j=i+1; j<n; j++){
               
            //here now we are going to campare i in main list and j in  visited array
              if(arr[i]==arr[j]){
                 count++;
                 visited[j]=1;
                  //by this line is to make note tht we have looked in j position and counted it by putting 1
              }
            }

            cout<<arr[i]<<" occurs at "<<count<<" times "<<endl;
         }
     }

    return 0; 
}
