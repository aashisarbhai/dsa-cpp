#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void printIt(unordered_map<string,string>tickets){
    //starting point
    unordered_set<string>to;

    for(pair<string,string>ticket:tickets){
        to.insert(ticket.second);
    }

    string start="";

    for(pair<string,string>ticket:tickets){
        if(to.find(ticket.first)==to.end()){
            start=ticket.first;
        }
    }

    //plan print
    cout<<start<<"->";
    while(tickets.count(start)){
        cout<<tickets[start]<<"->";
        start=tickets[start];
    }
    cout<<"destination";
}

int main(){
    unordered_map<string,string>tickets;
    tickets["Chennai"]="Bangluru";
    tickets["Mumbai"]="Delhi";
    tickets["Goa"]="Chennai";
    tickets["Delhi"]="Goa";

    printIt(tickets);

    return 0;
}