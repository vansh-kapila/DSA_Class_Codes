#include <iostream>
using namespace std;

class node
{   public:
    int data;
    node* next;
};

void printlist(node* x)
{
    while(x!=NULL)
    {
        cout<<x->data<<endl;
        x =x->next;
    }

}

int main()
{   
    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data=1;
    head->next = second;
    
    second->data=2;
    second->next = third;

    third->data=3;
    third->next = NULL;
    
    printlist(head);
    return 0;
}
