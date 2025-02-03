#include <iostream>
using namespace std;

//decimal-to-binary
// int decTobin(int decN){
//     int ans=0;
//     int pow=1;
//     while(decN>0){
//         int rem;
//         rem=decN%2;
//         decN/=2;
//         ans+=(rem*pow);
//         pow*=10;

//     }
//     return ans;
// }
// int main(){
//     int decN ;
//     cin>>decN;
//     // cout<<decTobin(decN);
//     for(int i=1;i<=decN;i++){
//         cout<<decTobin(i)<<endl;

//     }
//     return 0;
// }

//binary-to-decimal
int binTodec(int binN){
    int ans =0 ;
    int pow=1;

    while(binN>0){
        int rem;
        rem =binN%10;
        ans +=rem*pow;

        binN/=10;
        pow*=2;

    }
    return ans;
}
int main(){
    int binN;
    cin>>binN;
    cout<<binTodec(binN);
}
