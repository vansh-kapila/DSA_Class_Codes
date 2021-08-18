// A complete working C++ program to demonstrate
// all insertion methods on Linked List
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};

 
void push(Node** head_ref, int new_data)
{
	/* 1. allocate node */
	Node* new_node = new Node();

	/* 2. put in the data */
	new_node->data = new_data;

	/* 3. Make next of new node as head */
	new_node->next = (*head_ref);

	/* 4. move the head to point to the new node */
	(*head_ref) = new_node;
}

 
void insertAfter(Node* prev_node, int new_data)
{
 
	if (prev_node == NULL)
	{
		cout<<"the given previous node cannot be NULL";
		return;
	}

 
	Node* new_node = new Node();

	 
	new_node->data = new_data;

	 
	new_node->next = prev_node->next;

	 
	prev_node->next = new_node;
}
 
void append(Node** head_ref, int new_data)
{
	 
	Node* new_node = new Node();

	Node *last = *head_ref; /* used in step 5*/

 
	new_node->data = new_data;

	 
	new_node->next = NULL;

	 
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	 
	while (last->next != NULL)
		last = last->next;

	 
	last->next = new_node;
	return;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* head = NULL;
	
	 
	append(&head, 6);
	 
	push(&head, 7);
	
	 
	push(&head, 1);
	
	 
	append(&head, 4);
	
	 
	insertAfter(head->next, 8);
	
	cout<<"Created Linked list is: ";
	printList(head);
	
	return 0;
}
 
