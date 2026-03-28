#include<iostream>
using namespace std;

int fact(int n){
    if(n==1) return 1;

    return n*fact(n-1);
}

int desc(int n){
    if(n==1) return n;

    cout<<n<<" ";
    return desc(n-1);
}

int sum(int n){
    if(n==0|| n==1) return n;

    return n+sum(n-1);
}

int fibo(int n){
    if(n==0||n==1) return n;

    return fibo(n-1)+fibo(n-2);
}

bool isSorted(int *arr, int i, int n){
    if(i==n-1) return true;

    if(arr[i]>arr[i+1]) return false;
    return isSorted(arr,i+1,n);
}

int first(int *arr,int n,int k,int i){
    if(i==n-1) return -1;

    if(arr[i]==k) return i;
    return first(arr,n,k,i+1);
}

int tile(int n){
    if(n==1|| n==0) return 1;

    int verti=tile(n-1);
    int hori=tile(n-2);

    return verti+hori;
}

int pairing(int n){
    if(n==1||n==2) return n;

    int single=pairing(n-1);
    int pair=(n-1)*pairing(n-2);

    return single+pair;
}

int main(){
    //cout<<fact(5);
    //desc(10);
    //cout<<sum(3);
    //cout<<fibo(6);
    int arr[]={1,2,3,8,5};
    int n=5;
    //cout<<isSorted(arr,0,n);
    //cout<<first(arr,n,4,0);
    //cout<<tile(5);
    cout<<pairing(4);

    return 0;
}