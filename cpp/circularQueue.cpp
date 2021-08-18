#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define forPrintLoop(arr,n) for(int i=0;i<n;i++) std::cout << arr[i] << ' ';
#define forInputLoop(arr,n) for(int i=0;i<n;i++) std::cin >> arr[i]
#define space ' '
#define newline '\n'
using namespace std;

class uQueue{
    public:
        int front,rear;
        int size;
        int *arr;
        uQueue(int s){
            front=rear=-1;
            size=s;
            arr=new int[s];
        }

};

void addEle(uQueue &q,int val){
    if ((q.front == 0 && q.rear == q.size-1) || (q.rear == (q.front-1)%(q.size-1))){
        cout << "Queue overflow error" << newline;
        return;
    }
    if(q.front==-1) q.front=q.rear=0;
    else{
        if(q.rear==q.size-1 && q.front!=0) q.rear=0;
        else q.rear=q.rear+1;
    }
    q.arr[q.rear]=val;
}

int deQueue(uQueue &q)
{   
    if (q.front == -1)
    {
        printf("\nQueue is Empty");
        return INT_MIN;
    }
 
    int data = q.arr[q.front];
    q.arr[q.front] = -1;
    if (q.front == q.rear)
    {
        q.front = -1;
        q.rear = -1;
    }
    else if (q.front == q.size-1)
        q.front = 0;
    else
        q.front++;
 
    return data;
}

ostream & operator << (ostream&os,uQueue q){
    auto f=q.front,r=q.rear;
    if(f==-1){
        os << "Empty queue" << newline;
        return os;
    }
    if(r>=f){
        for(int i=f;i<=r;i++){
            os << q.arr[i] << space;        
        }   
    }
    else{
        for(int i=f;i<q.size;i++) os << q.arr[i] << space;
        for(int i=0;i<=r;i++) os << q.arr[i] << space;
    }
    os << newline;
    return os;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    uQueue q(4);
    addEle(q,3);
    addEle(q,3);
    addEle(q,6);
    cout << "After enqueuing 3,3,6 -> ";
    cout << q;
    cout << "Deleted the value -> " << deQueue(q) << newline;
    cout << "After deleting -> " ;
    cout << q;
    return 0;
}