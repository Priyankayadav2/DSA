#include <iostream>
using namespace std;
int main(){
   //for loop

    // print number upto 15
    // int n=20;
    // int i;
    // for(i=1;i<=15;i++){
    //     cout<<i<<" ";
    // }


    // sum of given number..

    // int n, i;
    // int sum=0;
    // cout<<"enter a number :";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum;

    //sum of all odd numbers from 1 to n

    // int n,i;
    // int oddSum=0;
    // cout<<"enter a number :";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     if(i%2!=0){
    //         // cout<<i<<" ";
    //         oddSum=oddSum+i;
    //     }
    
    // }
    // cout<<"oddSum is :"<<oddSum<<endl;


    //sum of even number of n
    // int n,i;
    // int evenSum=0;
    // cout<<"enter your numbers :";
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //         evenSum=evenSum+i;

    //     }
    // }
    // cout<<"Even numbers sum are :"<<evenSum;


        // is number is prime or not
        // int n,i;
        // cout<<"enter your number :";
        // cin>>n;
        // bool isPrime=true;
        // for (i=2;i<=(n-1);i++){
        //     if(n%2==0){
        //         isPrime=false;
        //         break;
        //     }
            
        // }
        //     if(isPrime==true){
        //         cout<<"Number is prime .";

        //     }
        //     else{
        //         cout<<"Number is not prime.";
        //     }
        // }

            // sum of all the numbers i to n which are divisible by 3
            int n,i;
            int sum=0;
            cout<<"enter your number :";
            cin>>n;
            for(i=1;i<=n;i++){
                if(i%3==0){
                    cout<<i<<" ";
                    sum=sum+i;
                }
            }
            cout<<"sum of 3 divisible number :"<<sum;
}

