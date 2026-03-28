#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int idx=-1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx]==-1) return NULL;

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;
}

void iterative(Node* root, int k){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int count=1;

    while(!q.empty()){
        Node* curr=q.front();
        q.pop();

        if(curr==NULL){
            if(q.empty()){
                break;
            }
            q.push(NULL);
            count++;
        }

        if(curr!=NULL && count==k){
            cout<<curr->data<<" ";
        }

        if(curr!=NULL && curr->left!=NULL){
            q.push(curr->left);
        }

        if(curr!=NULL && curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

void kth(Node* root,int level,int k){
    if(root==NULL){
        return;
    }

    if(k==level){
        cout<<root->data<<" ";
        return;
    }

    kth(root->left,level+1,k);
    kth(root->right,level+1,k);
}

int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,7,-1,-1};
    Node* root=buildTree(nodes);

    //iterative(root,3);
    //kth(root,1,3);

    return 0;
}