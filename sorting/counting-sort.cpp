#include<iostream>
#include<climits>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void countSort(int arr[], int n){
    int freq[100]={0};                   //range
    int minVal=INT_MAX;
    int maxVal=INT_MIN;

    //first step
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }

    //second step
    for(int i=minVal,j=0;i<=maxVal;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}

int main(){
    int arr[]={5,4,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    countSort(arr,n);

    return 0;
}