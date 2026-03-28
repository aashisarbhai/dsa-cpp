#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.first>p2.first;
}

int ans;

int knapsack(vector<int>&val,vector<int>wt,int W){
    int n=val.size();
    vector<pair<double,int>>ratio(n,make_pair(0,0));

    for(int i=0;i<n;i++){
        ratio[i].first=val[i]/(double)wt[i];
        ratio[i].second=i;
    }

    sort(ratio.begin(),ratio.end(),compare);

    for(int i=0;i<n;i++){
        int idx=ratio[i].second;
        if(wt[idx]<=W){
            ans+=val[idx];
            W-=wt[i];
        }else{
            ans+=(ratio[idx].first*W);
            W=0;
            break;
        }
    }
    return ans;
}

int main(){
    vector<int>val={60,100,120};
    vector<int>wt={10,20,30};
    int W=50;
    cout<<knapsack(val,wt,W);

    return 0;
}