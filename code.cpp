#include <iostream>
using namespace std;
void changeArr(int arr[],int size){
    cout<<"Changes in function (pass by reference) "<<endl;
    for(int i =0;i<size;i++){
        arr[i]=2*arr[i];
    }
}

int main(){
    int arr[]={1,2,3};
    changeArr(arr,3);
    cout<<"Here is updated array pass by refernce   ";
    for(int i =0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
