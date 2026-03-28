#include<iostream>
using namespace std;

void binToDec(int num){
    int pow=1;
    int newNum=0;
    while(num>0){
        int lastDig=num%10;
        newNum=newNum+(pow*lastDig);
        pow*=2;
        num/=10;
    }
    cout<<newNum;
}

void decToBin(int num){
    int bin=0;
    int pow=1;
    while(num>0){
        int ans=num%2;
        bin=bin+(ans*pow);
        pow*=10;
        num/=2;
    }
    cout<<bin;
}

int main(){
    //binToDec(100);
    decToBin(4);

    return 0;
}