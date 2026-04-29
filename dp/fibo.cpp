#include<iostream>
#include<vector>
using namespace std;

int fibo(int x){
    if(x==0 || x==1) return x;

    return fibo(x-1)+fibo(x-2);
}

int fibDp(int n,vector<int>&f){
    if(n==0||n==1) return n;

    if(f[n]!=-1){
        return f[n];
    }

    f[n]=fibDp(n-1,f)+fibDp(n-2,f);
    return f[n];
}

int main(){
    //cout<<fibo(6);

    int n=6;
    vector<int>f(n+1,-1);
    cout<<fibDp(n,f)<<endl;

    return 0;
}