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

Node* insert(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(val<root->data){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}

Node* buildBST(vector<int> arr,int n){
    Node* root=NULL;

    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}

void printPath(vector<int>path){
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

void rootToLeaf(Node* root,vector<int>&path){
    if(root==NULL) return;

    path.push_back(root->data);

    if(root->left==NULL && root->right==NULL){
        printPath(path);
        path.pop_back();
        return;
    }

    rootToLeaf(root->left,path);
    rootToLeaf(root->right,path);

    path.pop_back();
}

int main(){
    vector<int>arr={8,5,3,1,4,6,10,11,14};

    Node* root=buildBST(arr,9);
    vector<int>path;

    rootToLeaf(root,path);

    return 0;
}