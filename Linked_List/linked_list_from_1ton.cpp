#include <iostream>
using namespace std;

class node
{
    public:
    node* next;
    int data;
};
void print(node* n)
{
	while(n!=NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}

node* insertEnd(node* head,int data)
{
    node* ptr = head;
    while(ptr->next!=NULL)
    {
         ptr = ptr->next;
    }

    node* p = new node;
    p->data = data;
    ptr->next = p;
    p->next = NULL;

    return head;
}

int main(){
    node* head = new node();
    head->data=1;
    head->next=NULL;
    int n;
    n=10;
    
    for(int i=2;i<10;i++)
    {
       insertEnd(head,i);
    }
    print(head);

    
}