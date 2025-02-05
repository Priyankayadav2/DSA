#include <iostream>
using namespace std;
int main(){
    // int marks[]={23,21,67,45,90};
    // int n=5;

    // marks[2]=88;
    // cout<<marks[3]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<sizeof(marks)<<endl;


    // cout<<sizeof(marks)/sizeof(int)<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<marks[i]<<" ";
    // }
    // cout<<endl;
    // int size=3;
    // int result[size];
    // cout<<"user input array ";
    // for (int i =0;i<size;i++){
    //     cin>>result[i];
    // }
    // cout<<" another array is"<<endl;
    // for(int i=0;i<size;i++){
    //     cout<<result[i]<<" "<<endl;
    // }

    
    //loops in array
    //find min 
    int arr[]={5,15,22,1,-15,24};
    int size=6;
    int smallest=INT32_MAX;//int_max
    int smlindex=0;
    int largest=INT32_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            smlindex=i;

        }
        // smallest=min(arr[i],smallest);

        largest=max(arr[i],largest);
        }

    cout<<"smallest is "<<smallest<<" and index is "<<smlindex<<endl;
    cout<<"largest is "<<largest<<endl;

}
