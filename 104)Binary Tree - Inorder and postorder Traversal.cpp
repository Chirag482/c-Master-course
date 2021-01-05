#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
void print(node* root){
    if(root==NULL){
        return;
    }
    //otherwise print root first followed by subtrees(childern)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void printIN(node*root){
    if(root==NULL){
        return ;
    }
    printIN(root->left);
    cout<<root->data<<" ";
    printIN(root->right);
}
void printPOST(node*root){
    if(root==NULL){
        return ;
    }
    printPOST(root->left);
    printPOST(root->right);
    cout<<root->data<<" ";
}
node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int main(){
    node* root = buildTree();
    print(root);
    cout<<endl;
    printIN(root);
    cout<<endl;
    printPOST(root);
    return 0;
}

