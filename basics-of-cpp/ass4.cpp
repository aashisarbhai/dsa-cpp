#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // //print factorial of a number
    // int num,res=1;
    // cout<<"enter the number";
    // cin>>num;

    // for(int i=num;i>=1;i--){
    //     res*=i;
    // }
    // cout<<res;

    // //print multiplication table of a number
    // int num;
    // cout<<"enter the number";
    // cin>>num;

    // for(int i=1;i<=10;i++){
    //     int res=num*i;
    //     cout<<num<<" x "<<i<<" = "<<res<<endl;
    // }

    // //check armstrong number
    // int n,dig,res=0;
    // cout<<"enter the number";
    // cin>>n;
    // int num=n;

    // while(n>0){
    //     dig=n%10;
    //     res+=dig*dig*dig;
    //     n/=10;
    // }

    // if(res==num){
    //     cout<<"armstrong number";
    // }else{
    //     cout<<"not armstrong number";
    // }

    // //print all prime numbers till n
    // int n;
    // cout<<"enter the number";
    // cin>>n;

    // for(int i=2;i<=n;i++){
    //     bool isPrime=true;
    //     for(int j=2;j<=sqrt(i);j++){
    //         if(i%j==0){
    //             isPrime=false;
    //             break;
    //         }
    //     }
    //     if(isPrime){
    //         cout<<i<<" ";
    //     }
    // }

    //first n fibonacci series
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int a=0,b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=2;i<n;i++){
        int c=a+b;;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }

    return 0;
}