#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

node* deletion_first(node* head){
    
    node* p = new node();
    p = head;
    head = head->next;
    free(p);
    
    return head;
    
}

void printl(node* head)
{
    node* ptr = new node();
    ptr = head;
    while(ptr!=NULL)
    {
       cout<<ptr->data<<endl;
       ptr = ptr->next;
    }
}

int main(){
    node* head = new node(); 
    node* second = new node();
    node* third = new node();
    node* fourth = new node();

    head->data=0;
    head->next=second;
    
    second->data=10;
    second->next=third;

    third->data=20;
    third->next=fourth;

    fourth->data=30;
    fourth->next=NULL; 
    head = deletion_first(head);
    printl(head);
}

