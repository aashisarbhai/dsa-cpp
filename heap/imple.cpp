#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Heap{
    vector<int>vec;

    public:

    void push(int val){
        //step1
        vec.push_back(val);

        //fix heap
        int childIdx=vec.size()-1;
        int parIdx=(childIdx-1)/2;

        while(parIdx>=0 && vec[childIdx]>vec[parIdx]){
            swap(vec[childIdx],vec[parIdx]);
            childIdx=parIdx;
            parIdx=(childIdx-1)/2;
        }
    }

    void heapify(int i){
        if(i>=vec.size()){
            return;
        }

        int l=2*i+1;
        int r=2*i+1;

        int maxIdx=i;

        if(l<vec.size() && vec[l]>vec[maxIdx]){
            maxIdx=l;
        }

        if(r<vec.size() && vec[r]>vec[maxIdx]){
            maxIdx=r;
        }
        
        swap(i,maxIdx);
        if(maxIdx!=i){
            heapify(maxIdx);
        }
    }

    void pop(){
        swap(vec[0],vec[vec.size()-1]);

        vec.pop_back();

        heapify(0);
    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size()==0;
    }
};

int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    cout<<heap.top()<<endl;

    heap.pop();
    cout<<heap.top();

    return 0;
}