#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number :";
    cin>>n;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=(i+1);j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // cout<<"After execution current value of number is : "<<num;
    // return 0;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=1;j<=(i+1);j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<"After execution current value of number is : "<<ch;
    return 0;
}


