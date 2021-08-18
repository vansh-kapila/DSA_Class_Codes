#include <iostream> 
using namespace std;

class node
{
    public:
    node* next;
    int data;
};


void printll(node* head)
{
    node* ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

node* reversell(node* head){
node* prev = NULL;
node* curr = head;
node* next;

while(curr!=NULL)
{   next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}

return prev;
}

int main()
{
     node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();

    head->data = 10;
    head->next = second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    head = reversell(head);

    printll(head);


}