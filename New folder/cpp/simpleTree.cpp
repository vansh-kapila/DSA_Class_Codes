#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forLoop(n) for(int i=0;i<n;i++)
#define space ' '
#define newline endl

using namespace std;

class node{
    public:
        int data;
        node *left,*right;
        node(int data,node*left=NULL,node*right=NULL):data{data},left{left},right{right}{}
};
 
void preOrder(node *root){
    if(!root) return;
    cout << root->data << space;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root){
    if(!root) return;
    inOrder(root->left);
    cout << root->data << space;
    inOrder(root->right);
}

void postOrder(node *root){
    if(!root) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << space;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    node *root=new node(5);
    root->left=new node(4);
    root->right=new node(3);
    root->left->left=new node(2);
    root->left->right=new node(1);
    root->right->left=new node(6);
    root->right->right=new node(0);

    cout << "Preorder: ";
    preOrder(root);
    cout << newline << "Inorder: ";
    inOrder(root);
    cout << newline << "Postorder: ";
    postOrder(root);
    cout << newline;

    return 0;
}