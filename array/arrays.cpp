#include<iostream>
using namespace std;

int main(){
    // int marks[50]={1,2,3};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<sizeof(marks)<<endl;

    // int arr[5];
    // int len=sizeof(arr)/sizeof(int);

    // for(int i=0;i<len;i++){
    //     cout<<"enter element of array "<<endl;
    //     cin>>arr[i];
    // }

    // for(int i=0;i<len;i++){
    //     cout<<arr[i]<<" at index "<<i<<endl;
    // }

    //largest in array
    int arr[5]={4,5,8,11,2};
    int max=arr[0];
    int min=arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<max<<endl;
    cout<<min;

    return 0;
}