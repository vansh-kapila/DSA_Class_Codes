#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forLoop(n) for(int i=0;i<n;i++)
#define space ' '
#define newline endl

using namespace std;
class Node {
	public:
    int data;
	struct Node *left, *right;
	Node(int data):data{data},left{NULL},right{NULL}{}
};

void printPostorder(struct Node* node){
	if (node == NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);

	cout << node->data << " ";
}

void printInorder(struct Node* node){
	if (node == NULL)
		return;

	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

void printPreorder(struct Node* node){
	if (node == NULL)
		return;
	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

int main(){   
    int rVal,a,b,c,d;
    cout << "Enter the elements\n";
    cin >> rVal >> a >> b >> c >> d ;
	struct Node* root = new Node(rVal);
	root->left = new Node(a);
	root->right = new Node(b);
	root->left->left = new Node(c);
	root->left->right = new Node(d);

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);

	return 0;
}
