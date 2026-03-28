#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char word[],int n){
    int i=0,j=n-1;
    while(i<j){
        if(word[i]!=word[j]){
            cout<<"no";
            return false;
        }
        i++,j--;
    }
    cout<<"yes";
    return true;
}

int main(){
    char word[]="racecar";
    int n=strlen(word);
    cout<<palindrome(word,n);

    return 0;
}