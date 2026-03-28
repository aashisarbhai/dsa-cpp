#include<iostream>
#include <climits>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int *arr,int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    printArr(arr,n);
}

void linearSearch(int *arr, int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
        }
    }
}

void binarySearch(int *arr, int n, int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<mid;
            return;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
}

void printSub(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}

void subArraySum(int *arr, int n){
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout<<maxSum;
}

int search(int *arr, int n, int key,int st,int end){
    int mid=st+(end-st)/2;
    if(st>end) return -1;
    if(arr[mid]==key) return mid;

    if(arr[st]<=arr[mid]){                              //line 1
        if(arr[st]<=key && arr[mid]>=key){              //key exists in line 1
            return search(arr,n,key,st,mid-1);
        }else{
            return search(arr,n,key,mid+1,end);       //key exists in line 2
        } 
    }else{                                            //line 2
        if(arr[mid]<=key && arr[end]>=key){             //key exists in line 2
            return search(arr, n, key, mid+1,end);    
        }else{
            return search(arr, n, key, st,mid-1);     //key exists in line 1
        }
    }
}

int majority(int *arr,int n){
    int count =0, ele=arr[0];
    for(int i=0;i<n;i++){
        if(count==0){
            ele=arr[i];
            count=1;
        }
        else if(arr[i]==ele) count++;
        else count --;
    }
    return ele;
}

int power(double x,int n){
    double result=1.00;
    for(int i=1;i<=n;i++){
        result=result*x;
    }
    return result;
}

int main(){
    int arr[]={1,2,3,3,6,2,2,8,2,2,2};
    int n=sizeof(arr)/sizeof(int);
    int key=4;

    //reverse(arr,n);
    //linearSearch(arr,n,key);
    //binarySearch(arr,n,key);
    //printSub(arr,n);
    //subArraySum(arr,n);
    //cout<<search(arr,n,0,0,n-1);
    //cout<<majority(arr,n);
    cout<<power(2.0,10);

    return 0;
}