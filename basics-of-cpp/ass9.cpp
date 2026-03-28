#include<iostream>
#include<climits>
using namespace std;

bool findDuplicate(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"found the duplicate of "<<arr[i];
                return true;
            }
        }
    }
    cout<<"couldn't found the duplicate";
    return false;
}

int rotated(int *arr,int n,int target){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==target) return mid;

        else if(arr[start]<=arr[mid]){                        //first half is sorted
            if(target>=arr[start]&&target<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        else{
            if(target>arr[mid]&&target<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int maxProduct(int *arr,int n){
    int currMin=1,currMax=1;
    int maxPro=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(currMin,currMax);
        }        
        currMin=min(arr[i],arr[i]*currMin);
        currMax=max(arr[i],arr[i]*currMax);
        maxPro=max(maxPro,currMax);
    }
    return maxPro;
}

int main(){
    int arr[]={2,3,0,-2,-3,0};
    int n=sizeof(arr)/sizeof(int);
    cout<<maxProduct(arr,n);

    return 0;
}