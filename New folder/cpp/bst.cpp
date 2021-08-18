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

// here we use recursion to insert, if less than, go to the left subtree,
node * insert(node *root, int data){
    if(root==NULL){
        auto toInsert=new node(data);
        return toInsert;
    }
    else if(root->data>=data) root->left=insert(root->left,data);
    else root->right=insert(root->right,data);
    return root;
}

bool search(node *root,int data){
    if(root==NULL) return false;
    else if (root->data<data) return search(root->right,data);
    else if (root->data==data) return true;
    else return search(root->left,data);
}

// keep going left to get smaller and smaller elements
// make sure to discard if root->left is NULL i.e there is no left child
int minEle(node *root){
    if(!root) return -1;
    while(root->left) root=root->left;
    return root->data;
}

int minEleRec(node *root){
    if(!root) return -1; // corner case
    if(!root->left) return root->data;
    return minEleRec(root->left);
}

// make recursive calls,
// here we need to make -1 for leaf node, as we are returning max(left,right)+1
// as the height of a leaf node, by definition is 0
int findHeight(node * root){
    if(root==NULL) return -1;
    return max(findHeight(root->left),findHeight(root->right))+1;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    node *root=NULL;
    root=insert(root,4);
    root=insert(root,3);
    root=insert(root,5);
    if(search(root,5)) cout << "5 was found" << newline;
    cout << minEleRec(root) << newline;
    cout << "The height is " << findHeight(root) << newline;
    return 0;
}