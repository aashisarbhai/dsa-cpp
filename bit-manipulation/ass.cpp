#include<iostream>
using namespace std;

int clear(int num,int i,int j){
    int a=(~0)<<j;
    int b=(1<<i)-1;
    int bitMask=a|b;
    num=num&bitMask;
    return num;
}



int main(){
    //cout<<clear(15,1,3);

    return 0;
}