#include<iostream>
using namespace std;

int count(int arr[][3],int n,int m,int num){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==num){
                count++;
            }
        }
    }
    return count;
}

int sum(int arr[][3],int n,int m){
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=arr[1][j];
    }
    return sum;
}


void transpose(int arr[][3],int n,int m){
    int trans[m][n]={{0}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i]=arr[i][j];
        }
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][3]={{4,7,8},
                {8,8,7}};
    int arr2[][3]={{1,2,3},
                {4,5,6}};
    //cout<<count(arr,2,3,4);
    //cout<<sum(arr,2,3);
    transpose(arr2,2,3);

    return 0;
}