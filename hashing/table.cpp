#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
    string key;
    int val;
    Node* next;

    Node(string key,int val){
        this->key=key;
        this->val=val;
        next=NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }
};

class HashTable{
    int totSize;
    int currSize;
    Node** table;

    int hashFunction(string key){
        int idx=0;

        for(int i=0;i<key.size();i++){
            idx=(idx+(key[i]*key[i])%totSize)%totSize;
        }
        return idx;
    }

    void rehash(){
        Node** oldTable=table;
        int oldSize=totSize;

        totSize=2*totSize;
        currSize = 0;
        table=new Node*[totSize];

        for(int i=0;i<totSize;i++){
            table[i]=NULL;
        }

        for(int i=0;i<oldSize;i++){
            Node* temp=oldTable[i];
            while(temp!=NULL){
                insert(temp->key,temp->val);
                temp=temp->next;
            }
        }

        delete[] oldTable;
    }

    public:
    HashTable(int size=5){
        totSize=size;
        currSize=0;

        table=new Node*[totSize];

        for(int i=0;i<totSize;i++){
            table[i]=NULL;
        }
    }

    void insert(string key,int val){
        int idx=hashFunction(key);

        Node* newNode=new Node(key,val);
        Node* head=table[idx];

        newNode->next=table[idx];
        table[idx]=newNode;
        
        currSize++;

        double lambda=currSize/(double)totSize;

        if(lambda>1){
            rehash();
        }
    }

    bool exists(string key){
        int idx=hashFunction(key);

        Node* temp=table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    void remove(string key){
        int idx=hashFunction(key);
        
        Node* temp=table[idx];
        Node* prev=temp;
        while(temp!=NULL){
            if(temp->key==key){
                if(prev==temp){
                    table[idx]=temp->next;
                }else{
                    prev->next=temp->next;
                }
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }

    int search(string key){
        int idx=hashFunction(key);

        Node* temp=table[idx];
        while(temp!=NULL){
            if(temp->key==key){
                return temp->val;
            }
            temp=temp->next;
        }
        return -1;
    }

    void print(){
        for(int i=0;i<totSize;i++){
            cout<<i<<"->";

            Node* temp=table[i];
            while(temp!=NULL){
                cout<<temp->key<<","<<temp->val<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    HashTable ht;
    ht.insert("India",150);
    ht.insert("China",150);
    ht.insert("US",150);
    ht.insert("Nepal",150);
    ht.insert("UK",150);

    ht.remove("UK");

    ht.print();

    return 0;
}