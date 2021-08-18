#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

node* deletion_of_key(node* head,int key){
     
     node* p = head;
     node* ptr = head->next;
     while(ptr->data!=key)
     {
         p = p->next;
         ptr = ptr->next;
     }

     if(ptr->data==key)
     {
          p->next = ptr->next;
          free(ptr);
          
     }
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
    head = deletion_of_key(head,10);
    printl(head);
}

