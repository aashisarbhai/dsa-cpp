#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    printArr(arr,n);
}

void selectS(int *arr,int n){
    for(int i=0;i<n;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]) minIdx=j;
        }
        swap(arr[i],arr[minIdx]);
    }
    printArr(arr,n);
}

void insertion(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    printArr(arr,n);
}

int main(){
    int arr[]={4,6,8,1,2};
    int n=5;
    //bubble(arr,n);
    //selectS(arr,n);
    insertion(arr,n);

    return 0;
}