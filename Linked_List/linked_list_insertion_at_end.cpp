#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

node* insertionAtEnd(node* head,int data){
    node* ptr = new node();
    node* p = new node();
    ptr = head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=p;
    p->data=data;

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
    node* second = new node();
    node* third = new node();

    head->data = 10;
    head->next = second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    head = insertionAtEnd(head,40);

    print(head);

}