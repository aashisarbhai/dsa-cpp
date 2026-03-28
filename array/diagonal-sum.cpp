#include<iostream>
using namespace std;

void sum(int mat[][4],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-i-1){
                sum+=mat[i][j];
            }
        }
    }
    cout<<sum;
}

void sum2(int mat[][4],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=mat[i][i];         //pd
        if(i!=n-i-1){
            sum+=mat[i][n-i-1];   //sd
        }
    }
    cout<<sum;
}

int main(){
    int matrix[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    sum(matrix,4);
    sum2(matrix,4);

    return 0;
}