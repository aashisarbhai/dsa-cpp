#include<iostream>
using namespace std;

void removeDupli(string str,string ans,int i,int map[26]){
    if(i==str.size()){
        cout<<"ans: "<<ans<<endl;
        return;
    }

    char ch=str[i];
    int mapIdx=int(ch-'a');

    if(map[mapIdx]==true){
        //duplicates
        removeDupli(str,ans,i+1,map);
    }else{
        //not duplicate
        map[mapIdx]=true;
        removeDupli(str,ans+ch,i+1,map);
    }
}

int main(){
    string str="appnnacollege";
    string ans="";
    int map[26]={false};

    removeDupli(str,ans,0,map);

    return 0;
}