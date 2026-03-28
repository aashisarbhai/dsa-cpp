#include<iostream>
using namespace std;

int reverse(int n){
    int res=0;
    while(n>0){
        int dig=n%10;
        res=res*10+dig;
        n/=10;
    }
    return res;
}

void check(int n){
    if(n==reverse(n)){
        cout<<"palindrome number "<<n<<endl;
    }else{
        cout<<"not a palindrome number "<<n<<endl;
    }
}

int sum(int n){
    int res=0;
    while(n>0){
        int dig=n%10;
        res+=dig;
        n/=10;
    }
    return res;
}

int square(int n){
    int square=n*n;
    return square;
}

int squareSum(int a, int b){
    int res=square(a)+square(b)+2*a*b;
    return res;
}

int largest(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

void findLargest(int a,int b,int c){
    int large=largest(a,b);
    int large2=largest(large,c);
    cout<<"largest of numbers "<<a<<" "<<b<<" "<<c<<" is : "<<large2<<endl;
}

char nextCh(char ch){
    if(ch=='z'){
        return 'a';
    }
    char next=ch+1;
    return next;
}

int main(){
    // check(1250521);
    // check(123);
    // cout<<sum(123);
    // cout<<squareSum(3,3);
    // findLargest(2,3,4);
    // findLargest(4,6,2);
    // findLargest(9,3,4);
    cout<<nextCh('a')<<endl;
    cout<<nextCh('z')<<endl;
    return 0;
}