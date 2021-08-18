#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forPrintLoop(arr,n) for(int i=0;i<n;i++) std::cout << arr[i] << ' ';
#define forInputLoop(arr,n) for(int i=0;i<n;i++) std::cin >> arr[i]
#define space ' '
using namespace std;
class node{
    public:
        node *next;
        int data;

        node(int data):data{data}{
            next=NULL;
        }
};

std::ostream & operator << (std::ostream& os, node *&head){
    node * temp=head;
    while(temp){
        os<<temp->data << space;
        temp=temp->next;
    }
    return os;
}
void insertAtTail(node *&head,int data){
    node * insertion = new node(data);
    if(head==NULL){
        head=insertion;
        return;
    }
    node * temp = head;
    while(temp->next){
        temp=temp->next;
    }
    cout << "Inserted " << data << " at tail\n";
    temp->next=insertion;
}

void insertAtHead(node *& head,int data){
    node * insertion = new node(data);
    node *temp=head;
    insertion -> next = temp;
    head=insertion;
    cout << "Inserted " << data << " at head\n";
    return;
    
}

void deleteAtHead(node *&head){
    if(head==NULL || head->next==NULL){
        if(head->next==NULL) delete head;
        head=NULL;
        return ;
    }
    node * toDelete = head;
    head = head->next;
    delete toDelete;
}
void deletion(node * const &head,int data){
    if(!head){
        return;
    }
    node * temp = head;
    while(temp->next->data!=data){
        temp=temp->next;
    }
    node * toDelete=temp->next;
    temp->next = temp->next->next;
    cout << "Deleted " << toDelete->data << endl;
    delete toDelete;
    
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    node * head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,3);
    insertAtHead(head,0);
    deletion(head,4);
    deleteAtHead(head);
    std::cout << head << std::endl;
    return 0;
}