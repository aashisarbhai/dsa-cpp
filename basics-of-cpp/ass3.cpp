#include<iostream>
using namespace std;

int main(){
    // //square pattern
    // for(int i=0;i<4;i++){
    //     cout<<"****"<<endl;
    // }

    // //n to 1
    // int n;
    // cout<<"enter the number:";
    // cin>>n;

    // for(int i=n;i>0;i--){
    //     cout<<i<<" ";
    // }

    // //sum of digits
    // int n=10829,sum=0;
    // int num=n;

    // while(num>0){
    //     int dig=num%10;
    //     sum+=dig;
    //     num/=10;
    // }
    // cout<<sum;

    // //sum of n odd numbers
    // int n,sum=0;
    // cout<<"enter the number:";
    // cin>>n;

    // while(n>0){
    //     if(n%2!=0){
    //         sum+=n;
    //     }
    //     n--;
    // }
    // cout<<sum;

    // //sum of odd digit of a number
    // int n=12345;
    // int sum=0;

    // while(n>0){
    //     int dig=n%10;
    //     if(dig%2!=0){
    //         sum+=dig;
    //     }
    //     n/=10;
    // }
    // cout<<sum;

    //print number in reverse order digit by digit
    // int n=2345;

    // while(n>0){
    //     int dig=n%10;
    //     cout<<dig;
    //     n/=10;
    // }

    //reverse a number
    int n=10923;
    int revNum=0;

    while(n>0){
        int dig=n%10;
        revNum=revNum*10+dig;
        n/=10;
    }
    cout<<revNum;


    return 0;
}