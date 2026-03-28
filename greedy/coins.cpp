#include<iostream>
#include<vector>
using namespace std;

int total(vector<int>&coins,int val){
    int ans=0;

    for(int i=coins.size();i>=0&&val>0;i--){
        if(val>=coins[i]){
            ans+=val/coins[i];
            val=val%coins[i];
        }
    }
    return ans;
}

int main(){
    vector<int>coins={1,2,5,10,20,50,100,500,2000};
    int val=590;

    cout<<total(coins,val);

    return 0;
}