#include<iostream>
#include<vector>
using namespace std;

int rec(int n){
    if(n==2 || n==1) return n;

    int one=rec(n-1);
    int two=rec(n-2);

    return one+two;
}

int mem(int n,vector<int>&dp){
    if(n==1||n==2) return n;

    if(dp[n]==-1) dp[n]=mem(n-1,dp)+mem(n-2,dp);

    return dp[n];
}

int tab(int n){
    vector<int>dpt(n+1);

    dpt[1]=1;
    dpt[2]=2;

    for(int i=3;i<=n;i++){
        dpt[i]=dpt[i-1]+dpt[i-2];
    }

    return dpt[n];
}

int main(){
    int n=5;
    vector<int>dp(n+1,-1);

    cout<<tab(n);

    return 0;
}