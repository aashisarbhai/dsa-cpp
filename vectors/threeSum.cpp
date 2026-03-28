#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int st=i+1,end=nums.size()-1;
            while(st<end){
                int sum=nums[i]+nums[st]+nums[end];

                if(sum==0){
                    ans.push_back({nums[i],nums[st],nums[end]});
                    while(st < end && nums[st] == nums[st + 1]) st++;
                    while(st < end && nums[end] == nums[end - 1]) end--;
                }

                if(sum<0){
                    st++;
                }else{
                    end--;
                }

            }
        }
        return ans;
    }

int main(){
    vector <int> v={-1,0,1,2,-1,-4};
    vector<vector<int>> answer=threeSum(v);
    
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}