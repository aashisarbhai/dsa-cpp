#include<iostream>
using namespace std;

//get ith bit
int getIBit(int num,int i){
    int bitMask=1<<i;

    if(!(num&bitMask)){
        return 0;
    }else{
        return 1;
    }
}

//set ith bit
int setIBit(int num,int i){
    int bitMask=1<<i;

    num=num|bitMask;
    return num;
}

//clear ith bit
int clearBit(int num,int i){
    int bitMask=(~(1<<i));

    num=(num&bitMask);
    return num;
}

//check power of two
bool powerOfTwo(int num){
    num=((num)&(num-1));
    if(!num){
        cout<<"power of two";
        return true;
    }else{
        cout<<"not a power of two";
        return false;
    }
}

int update(int num,int i,int val){
    num=(num)&(~(1<<i));
    num=num|(val<<i);
    return num;
}

int clear(int num,int i){
    int bitMask=(~0)<<i;
    num=num&bitMask;
    return num;
}

int count(int num){
    int sum=0;
    while(num>0){
        sum+=num&1;
        num=num>>1;
        count(num);
    }
    return sum;
}

void fastExpo(int x,int n){
    int ans=1;

    while(n>0){
        int lastBit=n&1;
        if(lastBit){
            ans=ans*x;
        }

        x=x*x;
        n=n>>1;
    }
    cout<<ans<<endl;
}

int main(){
    // cout<<getIBit(6,2);
    // cout<<getIBit(3,4);
    // cout<<setIBit(6,3);
    // cout<<clearBit(6,1);
    // powerOfTwo(30);
    //cout<<update(7,2,0);
    //cout<<clear(15,2);
    //cout<<count(7);
    fastExpo(3,5);

    return 0;
}