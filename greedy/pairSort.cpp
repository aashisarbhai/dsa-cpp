#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second<p2.second;
}

int main(){
    vector<int>start={9,2,5};
    vector<int>end={2,1,5};

    vector<pair<int,int>>act(3,make_pair(0,0));
    for(int i=0;i<start.size();i++){
        act[i]=make_pair(start[i],end[i]);
    }

    for(int i=0;i<act.size();i++){
        cout<<"( "<<act[i].first<<" , "<<act[i].second<<" )"<<endl;
    }

    sort(act.begin(),act.end(),compare);

    for(int i=0;i<act.size();i++){
        cout<<"( "<<act[i].first<<" , "<<act[i].second<<" )"<<endl;
    }

    return 0;
}