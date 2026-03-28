#include<iostream>
#include<string>
using namespace std;

bool anagram(string str1,string str2){
    
    if(str1.length()!=str2.length()) return false;

    int count[26]={0};

    for(int i=0;i<str1.length();i++){
        count[str1[i]-'a']++;
    }

    for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';

        if(count[idx]==0) return false;
        
        else count[idx]--;
    }

    return true;
}

int main(){
    string str1="anagram";
    string str2="nagaram";
    cout<<anagram(str1,str2);

    return 0;
}