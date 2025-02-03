#include <iostream>
using namespace std;

// int printHello(){
//     cout<<"HELLO\n";
//     return 5;
// }
// void printHello(){
//     cout<<"HELLO ";
    
// }
// int main(){
//     //functions
//     printHello();
//     cout<<"World! ";
//     printHello();
// }

//with parameter


// int sum(int a,int b){ // paramter 
//     int sum =a+b;
//     return sum;
// }
// int main(){

//         cout<<sum(5,8); //argument

// }

//minOfTwo
// int minOfTwo(int a,int b){
//     if(a<b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     cout<<minOfTwo(4,1);
// }

//sum of n numbers

// int sumN(int n){
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main(){
//     int n ;
//     cin>>n;

//     cout<<sumN(n);
// }

//factorial of N numbers
// int factN(int n){
//     int fact=1;
//     for(int i =1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }


// int main(){
//     int n ;
//     cout<<"Enter your number = ";
//     cin>>n;
//     cout<<factN(n)<<endl;
//     cout<<factN(7);
// }

//pass by value
// int sumP(int a ,int b){
//     a=a+10;
//     b=b+10;
//     return a,b;
// }
// int main(){
//     int a =5;
//     int b=8;
//     cout<<sumP(a,b)<<endl;
//     cout<<a;
//     cout<<b;
// }

//sum of digits numbers
// int sumOfDigit(int n){
//     int digSum=0;
//     while(n>0){
//         int lastDig=n%10;
//         n/=10;
//         digSum+=lastDig;

//     }
//     return digSum;
// }
// int main (){
//     int n;
//     cout<<"enter your digit : ";
//     cin>>n;
//     cout<<sumOfDigit(n);
// }

//ncr factorial
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;

// }
// int nCr(int n ,int r){
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nCr=factorial(n-r);

//     return fact_n/(fact_r*fact_nCr);

// }
// int main(){
//     int n,r;
//     cout<<"Enter your value n : ";
//     cin>>n;
//     cout<<"Enter your value r : ";
//     cin>>r;

//     cout<<nCr(n,r);
// }

//check number is prime or not
// void isPrime(int n){
//     bool isPrime=true;
//     for(int i=2;i<(n-1);i++){
//         if(n%i==0){
//             isPrime=false;
//             break;

//         }
        
//     }
//     if(isPrime==true){
//         cout<<"prime";
//     }
//     else{
//         cout<<"not prime \n";
//     }


// }
// int main(){
//     int n;
//     cout<<"enter your number  : ";
//     cin>>n;
//     cout<< n <<" is ";
//     isPrime(n);
// }

//print all prime nnumbers
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) { // Check divisibility up to sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

// Function to calculate and print sum of prime numbers from 2 to each number up to N
void printPrimeSums(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            sum += i; // Add prime number to sum
        }
        cout << "Sum of primes up to " << i << " = " << sum << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    printPrimeSums(N); // Call function to print prime sums

    return 0;
}
