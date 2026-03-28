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

Node* insert(Node* root, int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(val>root->data){
        root->right=insert(root->right,val);
    }else{
        root->left=insert(root->left,val);
    }

    return root;
}

Node* buildBST(vector<int>arr,int n){
    Node* root=NULL;

    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool find(Node* root, int key){
    if(root==NULL) return false;

    if(root->data==key) return true;

    if(key<root->data){
        return find(root->left,key);
    }else{
        return find(root->right,key);
    }
}

int main(){
    vector<int> arr={8,5,3,1,4,6,10,11,14};
    Node* root=buildBST(arr,9);

    cout<<find(root,6);

    return 0;
}