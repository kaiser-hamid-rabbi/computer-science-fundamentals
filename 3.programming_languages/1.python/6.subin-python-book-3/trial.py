class Stack:

    def __init__(self):
        self.items = []

    def push(self, item):
        pass
    
    def pop(self):
        pass

    def is_empty(self):
        pass

if __name__ == "__main__":
    
    s = Stack()

    s.push(1)
    s.push(2)
    s.push(3)

    while not s.is_empty():
        item = s.pop()
        print(item)