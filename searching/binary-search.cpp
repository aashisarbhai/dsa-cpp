#include<iostream>
using namespace std;

int binarySearch(int *arr, int key,int n){
    int start=0,end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){             //second half
            start=mid+1;
        }
        else{                              //first half
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,7,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,7,n)<<" is the index";

    return 0;
}