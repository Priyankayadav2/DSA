#include <iostream>
using namespace std;
int main(){
    int marks[]={23,21,67,45,90};
    int n=5;
    // marks[2]=88;
    // cout<<marks[3]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<sizeof(marks)<<endl;

    
    cout<<sizeof(marks)/sizeof(int)<<endl;
    for(int i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    int size=3;
    int result[size];
    cout<<"user input array ";
    for (int i =0;i<size;i++){
        cin>>result[i];
    }
    cout<<" another array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<result[i]<<" "<<endl;
    }
}
