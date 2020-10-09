class Queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.append(item)
        print(f"{item} is inserted in the Queue!")

    def dequeue(self):
        ret = self.items.pop(0)
        print(f"{ret} is deleted from the Queue!")
        return ret

    def is_empty(self):
        if self.items == []:
            return True
        return False

if __name__ == "__main__":

    q = Queue()

    q.enqueue("Kaiser")
    q.enqueue("Hamid")
    q.enqueue("Rabbi")

    while not q.is_empty():
        person = q.dequeue()
        # print(person)