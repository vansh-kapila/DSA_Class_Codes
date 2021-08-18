class node:
    def __init__(self,data=None,next=None):
        self.data=data
        self.next=next

class linkedList:
    def __init__(self,data=None,next=None):
        self.head=node(data,next)
    
    #modifiers
    def insertAtTail(self,data):
        temp=self.head
        while temp.next is not None: temp=temp.next
        temp.next=node(data)
    
    def insertAtHead(self,data):
        newHead=node(data)
        newHead.next=self.head
        self.head=newHead

    def deleteAtTail(self):
        if self.head.next is None:
            head=None
            return
        it=listVal.head
        while it.next.next is not None:it=it.next
        del it.next
        it.next=None
    
    def deleteAtHead(self):
        if self.head.next is None:
            head=None
            return
        temp = self.head
        self.head=self.head.next
        del temp

    def deleteEle(self,key):
        it=self.head
        prev=None
        if it.data==key:
            self.deleteAtHead()
            return
        try:
            while it.data!=key:
                prev=it
                it=it.next
            prev.next=it.next
            del it
            return
        except:
            print("Element not found")
    
    #accessing
    def printList(self):
        it=listVal.head
        while it is not None:
            print(it.data,end='->')
            it=it.next
        print(None)



if __name__=="__main__":
    listVal=linkedList(int(input("Enter the value -> ")))
    listVal.insertAtTail(4)
    listVal.insertAtTail(5)
    listVal.insertAtHead(2)
    listVal.deleteEle(3)
    print("The linked list before deletion is ",end='')
    listVal.printList()
    listVal.deleteAtTail()
    listVal.deleteAtHead()
    print("The linked list after deletion is ",end='')
    listVal.printList()
    
    
    
