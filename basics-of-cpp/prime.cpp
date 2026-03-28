#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    bool isPrime=true;
    cout<<"enter the number";
    cin>>n;

    //first approach
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         isPrime=false;
    //         break;
    //     }
    // }
    // if(isPrime){
    //     cout<<"prime number";
    // }else{
    //     cout<<"not a prime number";
    // }

    //second approach
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"prime number"<<endl;
    }else{
        cout<<"not a prime number"<<endl;
    }
    
    return 0;
}