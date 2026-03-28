#include<iostream>
#include<vector>
using namespace std;

vector<int> findErrorNum(vector<int> vec){
    int i=0;
    vector<int> ans;

    while(i<vec.size()){
        if(vec[i]==vec[i+1]){
            ans.push_back(vec[i]);
            ans.push_back(vec[i]+1);
            return ans;
        }
        else i++;
    }
}

vector<int> findErrorNum2(vector<int>& nums){
    vector<int> freq(nums.size()+1,0);
    vector<int> ans;
    int miss=-1,dup=-1;

    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    
    for(int i=1;i<freq.size();i++){
        if(freq[i]==0){
            miss=i;
        }
        if(freq[i]==2){
            dup=i;
        }
    }
    ans.push_back(dup);
    ans.push_back(miss);
    return ans;
}

int main(){
    vector<int> vec={1,2,2,4,5,7,3};
    vector<int> ans=findErrorNum2(vec);
    cout<<ans[0]<<ans[1];

    return 0;
}