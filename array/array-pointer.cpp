#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0]=1000;
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
}

int main(){
    // int a=5;
    // int *ptr=&a;
    // cout<<ptr<<endl;

    int arr[5]={8,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<*arr<<endl;
    printArr(arr,n);

    // func(arr);
    // cout<<arr[0];

    return 0;
}