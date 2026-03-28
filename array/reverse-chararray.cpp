#include<iostream>
#include<cstring>
using namespace std;

void reverse(char ch[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout<<ch;
}

int main(){
    char ch[]="code";
    int n=strlen(ch);
    reverse(ch,n);

    return 0;
}