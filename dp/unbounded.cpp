#include<iostream>
#include<vector>
using namespace std;

int profit(vector<int>val,vector<int>wt,int W){
    int n=val.size();
    vector<vector<int>>dp(n+1,vector<int>(W+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            int itemWt=wt[i-1];
            int itemVal=val[i-1];

            if(itemWt<=j){
                dp[i][j]=max(dp[i][j-itemWt]+itemVal,dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main(){
    vector<int>val={15,14,10,45,30};
    vector<int>wt={2,5,1,3,4};

    cout<<profit(val,wt,7);

    return 0;
}