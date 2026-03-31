#include<vector>
#include<iostream>
#include<unordered_set>
using namespace std;

void union1(vector<int>arr1,vector<int>arr2){
    unordered_set<int>u;
    vector<int>ans;

    for(int i=0;i<arr1.size();i++){
        u.insert(arr1[i]);
    }

    for(int i=0;i<arr2.size();i++){
        u.insert(arr2[i]);
    }

    for(auto ele:u){
        cout<<ele<<" ";
    }
}

void getInter(vector<int>arr1,vector<int>arr2){
    unordered_set<int>s;

    for(auto ele:arr1){
        s.insert(ele);
    }

    for(auto ele:arr2){
        if(s.count(ele)){
            cout<<ele<<" ";
            s.erase(ele);
        }
    }
}

int main(){
    vector<int>arr1={7,3,9};
    vector<int>arr2={6,3,9,2,9,4};

    //union1(arr1,arr2);
    getInter(arr1,arr2);

    return 0;
}