#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    strcpy(str1,"apna college");
    //cout<<str1;
    char str2[100];
    strcpy(str2,"cat");
    //cout<<strcmp(str1,str2);
    cout<<strcat(str1,str2);

    return 0;
}