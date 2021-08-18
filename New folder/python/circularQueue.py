class CircularQueue:
    def __init__(self, maxSize):
        self.queue = list()
        self.maxSize = maxSize
        self.head = 0
        self.tail = 0

    def enqueue(self, data):
        if self.size() == (self.maxSize - 1):
            print("Queue overflow error")
            return
        else:
            self.queue.append(data)
            print("Enqueued",data)
            self.tail = (self.tail+1) % self.maxSize
            return True

    def dequeue(self):
        if self.size() == 0:
            print("Queue underflow error")
            return 
        else:
            data = self.queue[self.head]
            self.head = (self.head+1) % self.maxSize
            print("Dequeued",data)

    def traverse(self):
        if self.size==0:
            print("EMPTY")
            return 
        else:
            for i in self.queue: print(i,end=' ')
            print()

    def size(self):
        if self.tail >= self.head:
            qSize = self.tail - self.head
        else:
            qSize = self.maxSize - (self.head - self.tail)
        return qSize


if __name__ == "__main__":
    q = CircularQueue(6)
    q.enqueue(10)
    q.enqueue(20)
    q.enqueue(30)
    q.enqueue(40)
    q.enqueue(50)
    print("The current size of queue is ->",q.size())
    q.traverse()
    q.dequeue()