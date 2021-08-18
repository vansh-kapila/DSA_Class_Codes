#include <iostream>
using namespace std;
#define n 10

class stack
{
    int top;
    int* arr;

    public:
    stack(){
    arr = new int[n];
    top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        top++;
        arr[top]=x;

    }

    void pop()
    {     if(top==n-1)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        top--;
    }

    int topp()
    {     if(top==n-1)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {     if(top==n-1)
        {
            cout<<"STACK OVERFLOW"<<endl;
            return 0;
        }
        return top==-1;
    }
};

int main(){
    stack st;
    st.pop(); 
    st.push(5);
    st.push(10);
    cout<<st.topp()<<endl;
    st.pop();
    cout<<st.topp()<<endl;
    cout<<st.empty()<<endl;
  
}