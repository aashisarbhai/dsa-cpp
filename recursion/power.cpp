#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==1) return x;

    return x*power(x,n-1);
}

int power1(int x,int n){
    if(n==0) return 1;

    int halfPow=power(x,n/2);
    int sqr=halfPow*halfPow;

    if(n%2!=0){
        return x*sqr;
    }

    return sqr;

}

int main(){
    cout<<power1(2,10);

    return 0;
}