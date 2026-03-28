#include <iostream>
using namespace std;

void binToDec(int binNum){
    int n=binNum;
    int decNum=0;
    int pow=1;       //2^0

    while(n>0){
        int lastDig=n%10;
        decNum+=lastDig*pow;
        pow=pow*2;
        n/=10;
    }
    cout<<decNum<<endl;
}

void decToBin(int decNum){
    int n=decNum;
    int binaryNum=0;
    int pow=1;      //10^0

    while(n>0){
        int rem=n%2;
        binaryNum += rem * pow;
        pow=pow*10;
        n/=2;
    }

    cout<<binaryNum;
}

int main(){
    // binToDec(101);
    decToBin(14);
    return 0;
}