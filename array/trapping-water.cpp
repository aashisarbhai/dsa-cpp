#include<iostream>
#include<climits>
using namespace std;

void trap(int *height,int n){
    int leftMax[20000],rightMax[20000],minValue[20000],waterTrapped[20000],area=0;
    leftMax[0]=height[0];
    rightMax[n-1]=height[n-1];

    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i-1]);
    }

    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i+1]);
    }

    for(int i=0;i<n;i++){
        minValue[i]=min(leftMax[i],rightMax[i]);
    }

    for(int i=0;i<n;i++){
        waterTrapped[i]=minValue[i]-height[i];
        if(waterTrapped[i]<0){
            waterTrapped[i]=0;
        }
        area+=waterTrapped[i];
    }
    cout<<"water trapped = "<<area;
}

int main(){
    int height[]={5,1,3,7,9};
    int n=sizeof(height)/sizeof(int);
    trap(height,n);

    return 0;
}