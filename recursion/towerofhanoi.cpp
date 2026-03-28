#include<iostream>
using namespace std;

int tower(int n, string src, string help, string dest) {
    if(n == 1) return 1;

    return tower(n-1, src, dest, help) + 1 + tower(n-1, help, src, dest);
}

int main(){
    string src="abcde";
    string help="";
    string dest="";
    cout<<tower(5,src,help,dest);

    return 0;
}