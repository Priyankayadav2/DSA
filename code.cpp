#include <iostream>
using namespace std;
int main(){
    //Variables and data types....
    cout<<"Priyanka Yadav!\n Tamanna\n"<<endl;
    int age = 23;
    char grade='b';
    float PI=3.14f;
    bool isSafe=false;
    double price=3.244;
    char tograde='a';
    int value=grade;//ascii values store in conversions (type conversions)
    //type casting
    double netPrice=100.98;
    int worthPrice=(int)netPrice;
    cout<<worthPrice<<endl;
    cout<<value<<endl;
    cout<<price<<endl;
    cout<<isSafe<<endl;
    cout<<PI<<endl;
    cout<<grade<<endl;
    cout<<sizeof(age)<< endl;
    //operators
    int a=11,b=5;
    cout<<"sum is "<<(a+b)<<endl;
    cout<<"difference is "<<(a-b)<<endl;
    cout<<"product is "<<(a*b)<<endl;
    cout<<"Modulus "<<(a%b)<<endl;
    cout<<"Division is\n "<<(a/b)<<endl;
    //Realtional operators
    int c=3 ,d=5;
    cout<<(c<d)<<endl;
    cout<<(c>d)<<endl;
    cout<<(3>=3)<<endl;
    cout<<(3<=6)<<endl;
    cout<<(4==4)<<endl;
    cout<<(5!=5)<<endl;
    
    //unary opertaors;
    int x=2;
    int z=++x;
    int f=8;
    int e=f++;
    cout<<e<<" is e"<<endl;//8
    cout<<f<<" is f"<<endl;//9
    cout<<x<<" is x"<<endl;//3
    cout<<z<<" is z"<<endl;//3
    return 0;
}

