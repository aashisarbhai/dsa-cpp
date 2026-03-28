#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int res=1;
    for(int i=n;i>=1;i--){
       res*=i;
    }
    return res;
}

bool checkPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int binomial(int n, int r){
    int factn=1,factr=1,factnmr=1;
    for(int i=n;i>=1;i--){
        factn*=i;
    }
    for(int i=r;i>=1;i--){
        factr*=i;
    }
    for(int i=n-r;i>=1;i--){
        factnmr*=i;
    }
    
    int res=factn/(factr*factnmr);
    return res;
}

int facto(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int binCoeff(int n,int r){
    int res=fact(n)/(fact(r)*fact(n-r));
    return res;
}

void allPrimes(int n){
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    // cout<<fact(3)<<endl;
    // cout<<fact(5)<<endl;
    // cout<<checkPrime(5)<<endl;
    // cout<<checkPrime(8)<<endl;
    // cout<<binomial(4,2)<<endl;
    // cout<<binCoeff(4,2)<<endl;
    // cout<<binCoeff(3,2)<<endl;
    allPrimes(13);

    return 0;
}