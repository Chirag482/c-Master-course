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

int height(node* root){
    if(root == NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs) + 1;
}

void printKthLevel(node* root,int k){
    if(root == NULL){
        return ;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;
}

int main(){
    node* root = buildTree();
    //printing level wise
    for(int i=1;i<=height(root);i++){
        printKthLevel(root,i);
        cout<<endl;
    }
    return 0;
}
