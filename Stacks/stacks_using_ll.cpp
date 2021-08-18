#include <iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};

class stack
{
    node* head;
    int top;
    public:
    stack(){
        top=-1;
    }

    void push(int x)
    {
        node* ptr = head;
        node* p = new node();
        while(ptr->next!=NULL)
        {
           ptr=ptr->next;
        }
        p->data=x;
        ptr->next=p;
        p->next=NULL;
    }

    void pop()
    {   node* ptr = head;
        while((ptr->next)->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=NULL;
    }

    int topp()
    {
        node* ptr = head;
         while(ptr->next!=NULL)
        {
           ptr=ptr->next;
        }
        return ptr->data;
    }
};


int main(){
    stack st; 
    st.push(5);
    st.push(10);
    cout<<st.topp()<<endl; 
}