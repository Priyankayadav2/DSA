#include <iostream>
using namespace std;
int main(){
    //pyramid triangle
    // int n=4;
    // for(int i=0;i<n;i++)
    // {
    //     //spaces
    //     for(int j=0;j<n-i-1;j++){
    //     cout<<" ";
    //     }
    //     //num1:i+1
    //     for(int j=1;j<=i+1;j++){
    //     cout<<j;
    //     }
    //     //nums2
    //     for(int j=i;j>0;j--){
    //     cout<<j;
    //     }
    
    //     cout<<endl;
    // }



        // hollow pyramid triangle
        int n =4;
        for(int i=0;i<n;i++){
            //spaces
            for(int j=1;j<=n-i-1;j++){
                cout<<" ";
            }
            cout<<"*";

            if(i!=0){
                for(int j=0;j<2*i-1;j++){
                    cout<<" ";
                }
            
            cout<<"*";
            }
            cout<<endl;
        }
        for (int i=0;i<n-1;i++){
            //spaces
            for(int j =0;j<i+1;j++){
                cout<<" ";

            }
            cout<<"*";
            if (i !=n-2){
                //spaces
                for(int j =0;j<2*(n-i)-5;j++){
                    cout<<" ";
                }
                cout<<"*";
            }
            cout<<endl;
            
        }
}

