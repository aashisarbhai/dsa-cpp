#include<iostream>
using namespace std;

void loop(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void digSum(int num){
    int n=num;
    int sum=0;
    while(num>0){
        int lastDig=num%10;
        sum+=lastDig;
        num/=10;
    }
    if(sum<10){
    cout<<sum;
    }else{
        digSum(sum);
    }
}

void reverse(int num){
    int newNum=0;

    while(num>0){
        newNum*=10;
        int lastDig=num%10;
        newNum+=lastDig;
        num/=10;
    }
    cout<<newNum;
}

void prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            return;
        }
    }
    cout<<"prime";
}

void printPrime(int n){
    for(int i=2;i<n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<<i;
        }
    }
}

void fibo(int n){
    int first=0;
    int sec=1;
    cout<<first<<endl;
    cout<<sec<<endl;

    for(int i=3;i<=n;i++){
        int sum=first+sec;
        first=sec;
        sec=sum;
        cout<<sum<<" "<<endl;
    }
}

void numTow(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void upsideDown(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void numPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void charTow(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

char rect(int n){
    for(int i=1;i<=n;i++){
        cout<<"* ";
        for(int j=1;j<n;j++){
            if(i==1||i==n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"* ";
        cout<<endl;
    }
}

void turnpat(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void floydTri(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void doublePyramid(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void butterfly(int n){
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=4;i>=1;i--){
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void binTow(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            if(num==1){
                num--;
            }else{
                num++;
            }
        }
        cout<<endl;
    }
}

void slantedTow(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //stars
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void digTow(int n){
    for(int i=1;i<=n;i++){
        int dig=i;
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        //number
        for(int j=1;j<=i;j++){
            cout<<dig<<" ";
            dig--;
        }
        dig=2;
        //second phase
        for(int j=1;j<=i-1;j++){
            cout<<dig<<" ";
            dig++;
        }
        cout<<endl;
    }
}

int main(){
    //loop(5);
    //digSum(1029);
    //reverse(1029);
    //prime(11);
    //printPrime(8);
    //fibo(7);
    //numTow(4);
    //pattern(4);
    //upsideDown(4);
    //numPattern(4);
    //charTow(4);
    //rect(4);
    //turnpat(4);
    //floydTri(4);
    //doublePyramid(4);
    //butterfly(5);
    //binTow(4);
    //slantedTow(4);
    //digTow(4);

    return 0;
}