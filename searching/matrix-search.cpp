#include<iostream>
using namespace std;

void search1(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    cout<<"not found";
}

void search2(int arr[][4],int n,int m,int key){
    for(int i=0;i<n;i++){
        int start=0,end=m-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[i][mid]==key){
                cout<<i<<" "<<mid;
                return;
            }
            if(arr[i][mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    cout<<"not found";
}

bool search3(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;

    while(i<n && j>=0){
        int cell=mat[i][j];

        if(cell==key){
            cout<<"found "<<i<<" "<<j;
            return true;
        }
        else if(cell>key){
            //left
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"key not found";
    return false;
}

int main(){
    int matrix[][4]={{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
    search3(matrix,4,4,33);

    return 0;
}