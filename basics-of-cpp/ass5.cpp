#include<iostream>
using namespace std;

int main(){
    int n=5;

    // for(int i=1;i<=n;i++){
    //     int start=(i%2==0)?0:1;
    //     for(int j=1;j<=i;j++){
    //         cout<<start<<" ";
    //         start=1-start;
    //     }
    //     cout<<endl;
    // }

    // for(int i=1;i<=n;i++){
    //     //space
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"   ";
    //     }
    //     //star
    //     for(int j=1;j<=n;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}