#include<iostream>
#include<map>
#include<unordered_set>
#include<set>
using namespace std;

int main(){
    // unordered_set<int>s;

    // s.insert(1);
    // s.insert(5);
    // s.insert(3);

    // cout<<s.size();

    // if(s.find(3)!=s.end()){
    //     cout<<"exist";
    // }else{
    //     cout<<"no";
    // }

    set<int>s;

    s.insert(1);
    s.insert(5);
    s.insert(3);

    cout<<s.size();

    if(s.find(3)!=s.end()){
        cout<<"exist";
    }else{
        cout<<"no";
    }

    for(auto el:s){
        cout<<el<<" ";
    }

    return 0;
}