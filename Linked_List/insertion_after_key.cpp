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
node* insert_after_key(node* head,int key,int data)
{
     node* p = head;
     node* ptr = new node();
    
     while(p->data!=key and p!=NULL)
     {
         p=p->next;
     }

     ptr->next = p->next;
     p->next = ptr;
     ptr->data = data;

     return head;
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

    insert_after_key(head,20,30);
    insert_after_key(head,40,50);

    printlist(head);
}