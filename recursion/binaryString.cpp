#include<iostream>
using namespace std;

void binaryString(int n,string ans,int lastPlace){
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(lastPlace!=1){
        //add 0
        binaryString(n-1,ans+'0',0);

        //add 1
        binaryString(n-1,ans+'1',1);
    }else{
        //add 0
        binaryString(n-1,ans+'0',0);
    }
}

int main(){
    string ans="";
    binaryString(3,ans,0);

    return 0;
}