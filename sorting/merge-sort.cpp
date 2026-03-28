#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr,int si,int ei,int mid){
    vector<int> temp;
    int i=si;
    int j=mid+1;

    while(i<=mid&&j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }

    for(int idx=si,x=0;idx<=ei;idx++){
        arr[idx]=temp[x++];
    }
    
}

void mergeSort(int *arr,int si,int ei){
    if(si>=ei) return;

    int mid=(si+ei)/2;

    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,ei,mid);
}

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={6,3,7,5,2,4};
    mergeSort(arr,0,5);
    printArr(arr,6);

    return 0;
}