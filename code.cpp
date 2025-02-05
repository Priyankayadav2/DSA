#include <iostream>
using namespace std;
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum =sum+arr[i];
    }
    return sum;
}
int proArray(int arr[],int size){
    int pro=1;
    for(int i=0;i<size;i++){
        pro=pro*arr[i];
    }
    return pro;
}
int main(){
    int arr[]={2,3,4,5};
    int size=4;
    // int sumis=sumArray(arr,size);
    // cout<<sumis<<"is the sum of array ";
    cout<<sumArray(arr,size)<<" is sum of array "<<endl;
    cout<<proArray(arr,size)<<" is product of array ";
    return 0;
    }
    

