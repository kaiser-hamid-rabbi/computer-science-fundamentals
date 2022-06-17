class Stack:
    
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)
        print(f"{item} is inserted in the Stack!")

    def pop(self):
        ret = self.items.pop()
        print(f"{ret} is deleted from the Stack!")
        return ret

    def is_empty(self):
        if self.items == []:
            return True
        return False

if __name__ == "__main__":
    
    s = Stack()
    
    s.push(1)
    s.push(2)
    s.push(3)

    while not s.is_empty():
        item = s.pop()
        # print(item)