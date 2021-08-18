#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forPrintLoop(arr,n) for(int i=0;i<n;i++) std::cout << arr[i] << ' ';
#define forInputLoop(arr,n) for(int i=0;i<n;i++) std::cin >> arr[i]
#define space ' '
#define newline '\n'
using namespace std;

class node{
    public:
    int data;
    node * next;
    node *prev;
    node(int data,node * next,node *prev):data{data},next{next},prev{prev}{}
    
};

void insertAtHead(node *&head,int data){
    if(head==NULL){
        head=new node(data,NULL,NULL);
        return;
    }
    node* newHead=new node(data,head,NULL);
    head->prev=newHead;
    head=newHead;
    return;
}

void insertAtTail(node *&head,int data){
    node *temp=head;
    if(head==NULL){
        head=new node(data,NULL,NULL);
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = new node(data,NULL,temp);
    return;
}
void printList(node *head){
    cout << "NULL" << "<->";
    while(head!=NULL){
        cout << head->data << "<->";
        head=head->next;
    }
    cout << "NULL" << newline;
    return;
}

void deleteHead(node *&head){
    if(head==NULL){
        cout << "Empty list -> cannot pop" << newline;
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
    }

    auto temp=head;
    head->next->prev=NULL;
    head=head->next;
    delete temp;

}

void deleteAtTail(node *&head){
    if(head==NULL){
        cout<<"Empty list -> cannot pop" << newline;
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    auto toDel=head;
    while(toDel->next->next){
        toDel=toDel->next;
    }
    delete toDel->next;
    toDel->next=NULL;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    node * head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,3);
    cout << "After inserting 3,5 at head" << newline;
    printList(head);
    cout << "After inserting 3,4 at tail" << newline;
    insertAtTail(head,3);
    insertAtTail(head,4);
    printList(head);
    cout << "After deleting at head 2 times" << newline;
    deleteHead(head);
    deleteHead(head);
    printList(head);
    cout << "After deleting at tail 1 time" << newline;
    deleteAtTail(head);
    printList(head);
    return 0;
}