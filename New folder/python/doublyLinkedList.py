class node:
    def __init__(self,data=None,prev=None,next=None):
        self.data=data
        self.prev=prev  
        self.next=next
    
class doubleLinked:
    def __init__(self,data): 
        self.head=node(data)
    
    #modifiers
    def insertAtTail(self,data):
        temp=self.head
        while temp.next is not None: temp=temp.next
        temp.next=node(data,temp)
    
    def insertAtHead(self,data):
        newHead=node(data,None,self.head)
        self.head.prev=newHead
        self.head=newHead
        
    
    def deleteAtTail(self):
        if self.head is None:
            return
        if self.head.next is None:
            self.head=None
            return

        temp = self.head
        while temp.next is not None:
            temp=temp.next
        temp.prev.next=None
        del temp
        return

    def deleteAtHead(self):
        if self.head.data is None:
            return
        if self.head.next is None:
            self.head=None
            return 

        temp=self.head
        self.head.next.prev=None
        self.head=self.head.next
        del temp
    
    def delete(self,key):
        it=self.head
        if it.data==key:
            self.deleteAtHead()
            return
        try:
            while it.data!=key: it=it.next
            if it.next is None:
                it.prev.next=it.next
                del it
                return
            it.next.prev=it.prev
            it.prev.next=it.next
            del it
        except:
            print("Element not found")
    
    
    #accessing
    def printList(self):
        it=self.head
        print(None,end='')
        print('<->',end='')
        while it is not None:
            print(it.data,end='')
            it=it.next
            print('<->',end='')
        print(None)
        return
        
if __name__=="__main__":
    root=doubleLinked(5)
    root.insertAtHead(3)
    root.insertAtHead(4)
    root.insertAtHead(4)
    root.insertAtTail(6)
    print("Before doing the deletions: ",end='')
    root.printList()
    root.deleteAtTail()
    root.deleteAtHead()
    root.delete(3)
    root.delete(5)
    print("After doing the deletions: ",end='')
    root.printList()