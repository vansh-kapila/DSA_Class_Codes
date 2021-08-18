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
        node * next;
        int data;
        node(int data,node *next=NULL):data{data},next{next}{}
};

void insertAtHead(node *&head,int data){
    node *newHead=new node(data,head);
    if(head==NULL){
        head=newHead;
        newHead->next=head;
        return;
    }   

    auto it=head;
    while(true){
        it=it->next;
        if(it->next==head){
            break;
        }
    }  

    it->next=newHead;
    head=newHead;
    return;  
}

void insertAtTail(node *&head,int data){
    auto insert=new node(data,head);
    if(head==NULL){
        head=insert;
        insert->next=head;
        return;
    }
    auto it=head;
    while(true){
        if(it->next==head){
            break;
        }
        it=it->next;
    }
    it->next=insert;
    return;
}
ostream& operator <<(ostream &os,node *head){
    auto it=head;
    cout << "(start)";
    while(true){
        os<<it->data << "->";
        it=it->next;
        if(it==head){
            break;
        }
    }
    os << it->data << "(end)" << newline;
    return os;
}

int main()
{   
    node *head=NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    cout << "After inserting 3 and 2 at head -> " << newline;
    cout << head;
    insertAtTail(head,4);
    insertAtTail(head,5);
    cout << "After inserting 4 and 5 at tail ->" << newline;
    cout << head;
    return 0;
}