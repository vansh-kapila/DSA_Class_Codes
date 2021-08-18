class node:
    def __init__(self,data,next=None):
        self.data=data
        self.next=next
    
class circular:
    #constructor
    def __init__(self,data=None):
        self.head=node(data)
        self.head.next=self.head      
    
    #modifiers
    def insertAtTail(self,data):
        it=self.head
        newNode=node(data,self.head)

        while True: 
            if it.next==self.head:
                break
            it=it.next
        it.next=newNode

    def insertAtHead(self,data):
        newNode=node(data,self.head)
        it=self.head
        while True:
            if it.next==self.head:
                break
            it=it.next
        it.next=newNode
        self.head=newNode
        return

    def insertAtEle(self,key,data):
        newNode=node(data)
        it=self.head
        while True:
            if it.next==self.head or it.data==key:
                break
            it=it.next
        newNode.next=it.next
        it.next=newNode
        return
    
    def deleteAtTail(self):
        it=self.head
        if self.head.next==self.head:
            self.deleteAtHead()

        while True:
            if it.next.next==self.head:
                toDel=it.next
                it.next=self.head
                del toDel
                return
            it=it.next

    def deleteAtHead(self):
        it=self.head
        toDel=self.head
        if it is None:
            print("Empty list")
            return
        
        if it.next==self.head:
            self.head=None
            return
        
        while True:
            if it.next==self.head:
                break
            it=it.next
        it.next=self.head.next
        self.head=self.head.next
        del toDel
        return
    
    #accessing/traversal
    def printList(self):
        it=self.head
        if self.head is None:
            print(self.head)
            return
        while True:
            print(it.data,end='->')
            it=it.next
            if it==self.head:
                break
        print(self.head.data)

if __name__=='__main__':
    root=circular(int(input("Enter the starting value -> ")))
    root.printList()
    print("After inserting 4 at tail : ",end="")
    root.insertAtTail(4)
    root.printList()
    print("After inserting 2 at head :",end=" ")
    root.insertAtHead(2)
    root.printList()
    print("After inserting 6 after 2 :",end=" ")
    root.insertAtEle(2,6)
    root.printList()
    print("After deleting at tail :",end=" ")
    root.deleteAtTail()
    root.printList()
    print("After deleting element at head :",end=" ")
    root.deleteAtHead()
    root.printList()