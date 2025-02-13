#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,-8};
    int maxSum=INT32_MIN;
    int curSum=0;


    for(int val:arr){
        curSum+=val;
        maxSum=max(curSum,maxSum);
        if(curSum<0)
        {
            curSum=0;
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl; 
    return 0;
}
    

