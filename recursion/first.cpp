#include<iostream>
#include<vector>
using namespace std;

int idx(vector<int> arr,int i,int k){
    if(i==arr.size())return -1;

    if(arr[i]==k){
        return i;
    }

    return idx(arr,i+1,k);
}

int lastIdx(vector<int> arr,int i,int k){
    if(i==-1) return i;

    if(arr[i]==k) return i;

    return lastIdx(arr,i-1,k);
}

int main(){
    vector<int> arr={1,2,3,3,3,4};
    //cout<<idx(arr,0,3);
    cout<<lastIdx(arr,6,30);

    return 0;
}