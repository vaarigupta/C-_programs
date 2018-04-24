#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

///recursive fn
node* buildTree(){

    cout<<"Enter the data ";
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    ///Rec Case
    node* n = new node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}

void printTree(node*root){
    if(root==NULL){
        return;
    }
    ///Print the current node
    cout<<root->data<<" ";
    ///Call on left and right subtrees
    printTree(root->left);
    printTree(root->right);
}

int main(){

    node* root = NULL;
    root = buildTree();

    ///Print this tree
    printTree(root);



return 0;
}
