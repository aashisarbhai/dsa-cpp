#include<iostream>
#include<vector>
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

Node* insert(int val,Node* root){
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(val<root->data){
        root->left=insert(val,root->left);
    }else{
        root->right=insert(val,root->right);
    }
}

Node* buildBST(vector<int>&arr,int n){
    Node* root=NULL;

    for(int i=0;i<n;i++){
        root=insert(arr[i],root);
    }
    return root;
}

Node* getIS(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* delNode(Node* root,int val){
    if(root==NULL) return NULL;

    if(val<root->data){           //left subtree
        root->left=delNode(root->left,val);
    }else if(val>root->data){     //right subtree
        root->right=delNode(root->right,val);
    }else{
        //root==val
        //case1: leaf node
        if(root->left==NULL && root->right==NULL){
            delete root; 
            return NULL;
        }

        //case2: 1 child
        if(root->left==NULL || root->right==NULL){
            return root->left==NULL?root->right:root->left;
        }

        //case3: 2 child
        Node* IS=getIS(root->right);
        root->data=IS->data;
        root->right=delNode(root->right,IS->data);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    vector<int>arr={8,5,3,1,4,6,10,11,14};
    Node* root=buildBST(arr,9);

    inorder(root);
    cout<<endl;

    delNode(root,5);
    inorder(root);

    return 0;
}