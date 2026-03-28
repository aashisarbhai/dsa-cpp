#include<iostream>
using namespace std;

int main(){
    // int i=1;
    // while(i<=10){
    //     if(i==3){
    //         break;
    //     }
    //     cout<<i<<" ";
    //     i++;
    // }
    // cout<<"end of loop now";

    //user can keep entering the numbers till they enter multiple of 10
    // int n;
    // do{
    //     cout<<"enter a number";
    //     cin>>n;
    //     if(n%10==0){
    //         break;
    //     }
    // }while(true);

    //continue
    // for(int i=1;i<=10;i++){
    //     if(i==3){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    //show numbers entered by user except multiple of 10
    int n;
    do{
        cout<<"enter a number";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"you entered:"<<n<<endl;
    }while(true);

    return 0;
}