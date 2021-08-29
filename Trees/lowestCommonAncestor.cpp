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

Node* lca(Node* root ,int a,int b){

    if(root==NULL){
        return NULL;
    }

    if(root->data == a or root->data == b){
        return root;
    }

    Node* left = lca(root->left,a,b);
    Node* right = lca(root->right,a,b);


    if(left and right){
        return root;
    }

    return (left!=NULL)?left:right;
}


int height(Node *root){
    if(root == NULL){
        return 0;
    }
    return max(height( root->left),height(root->right)) +1;
}
 


int main(){
    Node* root = buildTree();
    cout<<lca(root,1,13)->data;
    return 0;

 
}