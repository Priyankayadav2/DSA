#include <iostream>
#include <vector>

using namespace std;
int linearSearch(const vector<int> & vec,int target){
    for(int i =0;i<vec.size();i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    cout <<"Linear search on vector"<<endl;
    vector <int> vec={10,25,30,45,50,75};
    int target;
    cout<<"Enter the target number to serach :";
    cin>>target;

    int index=linearSearch(vec,target);
    if(index!=-1){
        cout<<"Element found at index "<<index<<endl;
    }
    else{
        cout<<"element not found !"<<endl;
    }
    return 0;
    }
    

