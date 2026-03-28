#include<iostream>
using namespace std;

class Stack{
    public:
    int arr[100];
    int topIdx=-1;

    void push(int val){
        topIdx++;
        arr[topIdx]=val;
    }

    void pop(){
        topIdx--;
    }

    void top(){
        cout<<arr[topIdx]<<endl;
    }

    void print(){
        for(int i=0;i<=topIdx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(2);
    s.push(4);
    s.push(1);
    s.top();
    s.pop();
    s.top();


    return 0;
}