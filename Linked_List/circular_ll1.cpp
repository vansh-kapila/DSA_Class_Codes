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
    node* ptr = head;
   
    do{
        cout<<ptr->data<<endl;
        ptr = ptr->next;
     }while(ptr!=head);
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
    fourth->next=head;

    printlist(head); 

}