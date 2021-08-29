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

void printLevelOrder(Node* root){

    if(root == NULL ){
        return ;
    }
    int h = height(root);

   queue<Node*>q;

    q.push(root);
    q.push(NULL); 

    while(q.empty() == false){
        Node *a = q.front();

        if(a==NULL){
            cout<<endl;
            q.pop();
             if(!q.empty()){
                q.push(NULL);
            }

        }else{
            cout<<a->data<<" ";
        q.pop();

        if(a->left!=NULL){
            q.push(a->left);
        }

        if(a->right!=NULL){
            q.push(a->right);
        }

        }
        

    }

}



int childSum(Node *root){
    if(root == NULL){
        return 0;
    }
    if(root->left==NULL and root->right ==NULL){
        return root->data;
    }
    int temp = root->data;
    root->data = childSum(root->left) + childSum(root->right);

    return root->data + temp;
}

int main(){
    Node* root = buildTree();
    childSum(root);
    printLevelOrder(root);

    return 0;


}