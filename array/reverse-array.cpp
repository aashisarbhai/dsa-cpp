#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//using extra space
void reverse(int *arr, int n){
    int copyArr[n];
    int j;
    for(int i=0;i<n;i++){
        j=n-i-1;
        copyArr[j]=arr[i];
    }
    
    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }

    printArr(arr,n);
}

//without extra space
void reverseSwap(int *arr,int n){
    int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArr(arr,n);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    reverseSwap(arr,n);

    return 0;
}