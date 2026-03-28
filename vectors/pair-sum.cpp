#include<iostream>
#include<vector>
using namespace std;

void pairSum(vector<int> v,int target){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            int sum=v[i]+v[j];

            if(sum==target){
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    cout<<"no index";
}

vector<int> pairSum2(vector<int> v,int target){
    int st=0,end=v.size()-1;
    vector<int> ans;

    while(st<end){
        int currSum=v[st]+v[end];

        if(currSum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }

        else if(currSum<target) st++;

        else end--;
    }
    return ans;
}

int main(){
    vector<int> vec={2,7,11,15};
    vector<int> ans=pairSum2(vec,13);
    cout<<ans[0]<<","<<ans[1];

    return 0;
}