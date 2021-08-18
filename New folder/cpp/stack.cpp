#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forLoop(n) for(int i=0;i<n;i++)
#define space ' '
#define newline endl

using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int data,node *next=NULL):data{data},next{next}{}
};

class lStack{
    int size;
    int top;
    int *arr;
    public:
        lStack(int decsize):arr{new int[decsize]},size{decsize},top{0}{}
        void pushEle(int data);
        void popEle();
        void peek();
};

void lStack::pushEle(int data){
    if(top==size){
        cout << "Stack overflow error" << newline;
        return;
    }
    arr[top++]=data;
    cout << "Pushed element " << data << newline;
}

void lStack::popEle(){
    if(top==0){
        cout << "Stack underflow error" << newline;
        return ;
    }
    cout << "Popped element " << arr[--top] << newline;
    return;
}

void lStack::peek(){
    if(top==0){
        cout << "EMPTY" << newline;
        return;
    }
    cout << arr[top-1] << newline;
}


class llStack{
    node * head;
    int top;
    int size;
    public:
        // constructor
        llStack(int size):size{size},head{NULL},top{0}{}

        // modifiers
        void pushEle(int data);
        void popEle();
        void peek();
};

void llStack::pushEle(int data){
    if(top==size){
        cout << "Stack overflow error" << newline;
        return;
    }
    auto toInsert=new node(data,head);
    head=toInsert;
    top+=1;
    cout << "Pushed element " << data << newline;
    return;
}

void llStack::popEle(){
    if(top==0){
        cout << "Stack underflow error" << newline;
        return;
    }
    auto temp=head;
    cout << "Popped element " << temp->data << newline;
    head=head->next;
    top-=1;
    delete temp;
}

void llStack::peek(){
    if(top==0){
        cout << "EMPTY" << newline;
        return;
    }
    cout << head->data << newline;
    return;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    cout << "USING ARRAY" << newline;
    lStack l1(5);
    l1.pushEle(4);
    l1.pushEle(5);
    l1.popEle();
    l1.peek();

    cout << "LINKED LIST" << newline;
    llStack l2(4);
    l2.pushEle(4);
    l2.pushEle(3);
    l2.pushEle(5);
    l2.popEle();
    l2.peek();
    return 0;
}