#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;


}

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) +1;
}

int isBalanced(int lh, int rh , int l, int r){
    if(abs(lh-rh)<=1 and l and r){
        return 1;
    }
    return 0;
}


pair<int,int> isHeightBalanced(Node* root){
    pair<int,int> p;
    if(root==NULL){
        p.first = 0;
        p.second = 1;
        return p;
    }

    pair<int,int> left = isHeightBalanced(root->left);

    pair<int,int> right = isHeightBalanced(root->right);

    p.first = max(left.first,right.first) +1;

    p.second  = isBalanced(left.first,right.first,left.second,right.second);

    return p;
}



int main(){
    Node* root = buildTree();
    pair<int,int> p= isHeightBalanced(root);
    cout<<p.second;

    return 0;


}