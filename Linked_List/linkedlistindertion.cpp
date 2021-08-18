#include<iostream>
using namespace std;

class node
{   public:
    int data;
    node* next;
};
node* insertAtBeginning(node* head,int d)
{
    node* ptr = new node();
    
    ptr->data=d;
    ptr->next=head;

    return ptr;
}

void print(node *x)
{    
    while(x!=NULL)
    {
        cout<<x->data<<endl;
        x = x->next;
    }
}
int main(){
    node* head = new node();
    node* first = new node();
    node* second = new node();

    head->data=10;
    head->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=NULL;

    head = insertAtBeginning(head,0);

    print(head);
}