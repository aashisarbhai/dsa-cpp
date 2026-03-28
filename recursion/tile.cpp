#include<iostream>
using namespace std;

int tile(int n){
    if(n==0||n==1) return 1;

    //vertical
    int vertical= tile(n-1);

    //horizontal
    int horizontal= tile(n-2);

    //total ways
    return horizontal+vertical;
}

int main(){
    cout<<tile(4);

    return 0;
}