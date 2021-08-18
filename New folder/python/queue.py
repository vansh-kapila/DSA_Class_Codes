class queue:
    def __init__(self,size):
        self.size=size 
        self.arr=[]
    def enqueue(self,data):
        if len(self.arr)==self.size:
            print("Queue overflow error")
            return 
        self.arr.append(data)
        print("Successfully enqueued",data)
    def dequeue(self):
        if len(self.arr)==0:
            print("Queue underflow error")
            return 
        item=self.arr.pop(0)
        print("Successfully dequeued",item)
    def traverse(self):
        for i in self.arr: print(i,end=' ')
        print()

if __name__=='__main__':
    value=queue(3)
    value.enqueue(2)
    value.enqueue(1)
    value.enqueue(3)
    value.traverse()
    value.dequeue()