#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forLoop(n) for(int i=0;i<n;i++)
#define space ' '
#define newline endl

using namespace std;

class uQueue{
    int *arr,front,rear,size;
    public:
        uQueue(int size):arr{new int[size]},size{size},front{-1},rear{-1}{}
        void enqueue(int data);
        void dequeue();
        bool checkEmpty();
        void traverse();
};

void uQueue::enqueue(int data){
    if(rear==size-1){
        cout << "Queue overflow error" << newline;
        return;
    }
    if(front==-1) front=0;
    rear++;
    arr[rear]=data;
    cout << "Enqueued " << data << newline;
    return;
}

void uQueue::dequeue(){
    if(front==-1){
        cout << "Queue underflow error" << newline;
        return;
    }
    cout << "Dequeued " << arr[front] << newline;
    if(front==rear) front=rear=-1;
    else ++front;
}

void uQueue::traverse(){
    if(front==rear){
        cout << "Empty";
        return;
    }
    for(int i=front;i<=rear;i++) cout << arr[i] << space;
    cout << newline;
}

bool uQueue::checkEmpty(){
    return front==rear;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    uQueue l(5);
    l.enqueue(4);
    l.enqueue(3);
    l.enqueue(6);
    l.traverse();
    l.dequeue();
    if(l.checkEmpty()) cout << "Its empty.\n";
    l.traverse();
    return 0;
}