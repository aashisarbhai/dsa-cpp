#include<iostream>
#include<list>
#include<iterator>
using namespace std;

class Node {
    int data;
    Node* next;
};

class List{
    Node *head;
    Node *tail;

public:
    List(){
        head = NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val);     //node created

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<"| "<<temp->data<<" |->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

Node* splitAtMid(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    while(fast!=NULL || fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;
    }
    return slow;
}

Node* merge(Node* left, Node* right){
    List ans;
    Node* i=left;
    Node* j=right;

    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            ans.push_back(i->data);
            i=i->next;
        }else{
            ans.push_back(j->data);
            j=j->next;
        }
    }

    while(i!=NULL){
        ans.push_back(i->data);
        i=i->next;
    }
    while(j!=NULL){
        ans.push_back(j->data);
        j=j->next;
    }
    return ans.head;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* rightHead=splitAtMid(head);

    Node* left=mergeSort(head);  //left sorted
    Node* right= mergeSort(rightHead);  //right sortedNode* splitAtMid(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    while(fast!=NULL || fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;
    }
    return slow;
}

Node* merge(Node* left, Node* right){
    List ans;
    Node* i=left;
    Node* j=right;

    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            ans.push_back(i->data);
            i=i->next;
        }else{
            ans.push_back(j->data);
            j=j->next;
        }
    }

    while(i!=NULL){
        ans.push_back(i->data);
        i=i->next;
    }
    while(j!=NULL){
        ans.push_back(j->data);
        j=j->next;
    }
    return ans.head;
}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* rightHead=splitAtMid(head);

    Node* left=mergeSort(head);  //left sorted
    Node* right= mergeSort(rightHead);  //right sorted

    return merge(head,right);
}

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_back(6);
    printList(ll.head);
    ll.head=mergeSort(ll.head);
    printList(ll.head);

    return 0;
}