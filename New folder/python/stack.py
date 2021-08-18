from typing import Sized


class node:
    def __init__(self,data=None,next=None):
        self.data=data
        self.next=next

class stack:
    def __init__(self,size):
        self.head=node()
        self.size=size
        self.top=0

    def pushEle(self,data):
        if self.top==self.size: 
            print("Stack overflow error")
            return 
        print("Pushed element",data)
        if self.head is None:
            self.head.data=data 
            self.top+=1 
            return

        toInsert=node(data,self.head)
        self.top+=1
        self.head=toInsert

    def popEle(self):
        if self.top==0: 
            print("Stack underflow error")
            return 
        print("Popped element",self.head.data)
        toDel=self.head 
        self.top-=1
        self.head=self.head.next
        del toDel 

    def traverse(self):
        temp = self.head
        if self.top==0:
            print("Empty stack")
            return
        for i in range(self.top):
            print(temp.data,end=' ')
            temp=temp.next 
        print()

    def peek(self):
        if self.top==0:
            print("EMPTY")
            return 
        print(self.head.data)
    
        
if __name__=="__main__":
    value = stack(5)
    value.pushEle(4)
    value.pushEle(3)
    value.pushEle(2)
    value.traverse()
    value.popEle()
    value.popEle()
    value.popEle()
    value.popEle()
    value.peek()
