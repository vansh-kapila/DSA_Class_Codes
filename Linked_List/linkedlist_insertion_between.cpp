#include<iostream>
using namespace std;

class node
{   public:
    int data;
    node* next;
};

node* insertinbetween(node* head,int d,int index)
{   node* p = new node();
    node* ptr = new node();
    ptr = head;
    int k=0;
    while(k!=index-1)
    {
       ptr = ptr->next;
       k++;
    }
    p->data=d;
    p->next = ptr->next;
    ptr->next = p;
    

    return head;
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

    
    insertinbetween(head,50,2);
    print(head);
}