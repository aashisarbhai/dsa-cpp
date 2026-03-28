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

static int idx=-1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx]==-1) return NULL;

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;
}

int height(Node* root){
    if(root==NULL) return 0;

    int leftHt=height(root->left);
    int rightHt=height(root->right);

    int currHt=max(leftHt,rightHt)+1;
    return currHt;
}

int diam(Node* root){
    if(root==NULL) return 0;

    int currDiam=height(root->left)+height(root->right)+1;
    int leftDiam=height(root->left);
    int rightDiam=height(root->right);

    return max(currDiam,max(leftDiam,rightDiam));
}

pair<int,int> diam2(Node* root){
    if(root==NULL) return make_pair(0,0);

    //(diameter,height)
    pair<int,int>leftInfo=diam2(root->left);
    pair<int,int>rightInfo=diam2(root->right);
    int currDiam=leftInfo.second+rightInfo.second+1;
    int finalDaim=max(currDiam, max(leftInfo.first,rightInfo.first));
    int currHt=max(leftInfo.second,rightInfo.second)+1;
    return make_pair(finalDaim,currHt);

}

int main(){
    vector<int>nodes={1,2,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root=buildTree(nodes);
    cout<<diam2(root).first;

    return 0;
}