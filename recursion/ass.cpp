#include<iostream>
using namespace std;

int search(int *arr,int n,int key,int st,int end){
    if(st>end) return -1;
    int mid=(st+end)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]<key){
        return search(arr,n,key,mid+1,end);
    }else{
        return search(arr,n,key,st,mid-1);
    }
}

void find(int *arr,int n,int key,int i){
    if(i==n)return;

    if(arr[i]==key){
        cout<<i<<" ";
    }
    find(arr,n,key,i+1);
}

int count(string str,int n,int i,int j){
    if(n<=0) return 0;
    if(n==1) return 1;

    int res=count(str,n-1,i+1,j)+count(str,n-1,i,j-1)-count(str,n-2,i+1,j-1);

    if(str[i]==str[j]){
        res++;
    }

    return res;
}

int main(){
    // int arr[]={1,2,3,4,5,6,7};
    // cout<<search(arr,7,0,0,6);

    // int arr[]={3,2,4,5,6,2,7,2,2};
    // find(arr,9,2,0);

    string str="abcab";
    cout<<count(str,5,0,4);



    return 0;
}