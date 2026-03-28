#include<iostream>
#include<cstring>
using namespace std;

int main(){
// char ch1='a';
// int a=65;
// cout<<char(a);
// cout<<ch1;

// char str[5]={'a','b','c','d','e'};
// cout<<str[3];

// char str1[5]={'c','o','d','e'};
// cout<<str1<<endl;

// char work[]="code";
// cout<<work;

// char work[30];
// cin>>work;
// cout<<work;
// cout<<work[2];

// char sentence[30];
// cin.getline(sentence,30);
// cout<<sentence;
// cout<<strlen(sentence);

// "aashi" //string literals
// "a"   //string literals

//convert to uppercase
char word[]="ApPle";
for(int i=0;i<strlen(word);i++){
    char ch=word[i];

    if(ch>='a' && ch<='z'){
        continue;
    }else{
        word[i]=ch-'A'+'a';
    }
}
cout<<word;

    return 0;
}