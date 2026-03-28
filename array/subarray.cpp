#include<iostream>
#include <climits>

using namespace std;

void printArray(int *arr,int start,int end){
    for(int i=start;i<=end;i++){
        cout<<arr[i];
    }
    cout<<", ";
}

void subarray(int *arr,int n){
    int maxSum= INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            printArray(arr,start,end);
        }
        cout<<endl;
    }
}

void maxsubarraysum(int *arr,int n){
    int maxSum= INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currSum=0;
            for(int i=start;i<=end;i++){
                currSum+=arr[i];
            }
            cout<<currSum<<", ";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"maximum sum is : "<<maxSum;
}

void maxsubarraysum2(int *arr,int n){
    int maxSum= INT_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum+=arr[end];
            maxSum=max(maxSum,currSum);
        }
    }
    cout<<"maximum sum is : "<<maxSum;
}

void maxsubarraysum3(int *arr,int n){
    int maxSum=INT_MIN,currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);

        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum;
}

int main(){
    int arr[]={1,-2,3,-4,5};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraysum3(arr,n);

    return 0;
}