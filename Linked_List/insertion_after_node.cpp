#include <iostream>
using namespace std;

class node
{
    public:
    node* next;
    int data;
};

void printlist(node* head)
{
    node* p = head;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
node* insert_after_node(node* ptr,int data)
{
     node* p = new node();
     p->next = ptr->next;
     ptr-> next = p;
     p->data = data;

     return ptr;
}

int main(){
    node* head = new node();
    node* first = new node();
    node* second = new node();
    node* third = new node();

    head->next = first;
    head->data=0;
    
    first->next= second;
    first->data = 10;

    second -> next = third;
    second -> data = 20;

    third->next = NULL;
    third->data = 40;

    insert_after_node(second,30);

    printlist(head);
}