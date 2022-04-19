from ds_1 import DoubleLinkedList

# Creating Stack [LIFO (Last In First Out)]
class Stack:
    def __init__(self):
        # self.__internal_list = []
        self.__list = DoubleLinkedList()

    def push(self, val):
        # self.__internal_list.append()
        self.__list.add(val)

    def pop(self):
        val = self.__list.back()
        self.__list.remove_last()
        return val

    def is_empty(self):
        return self.__list.size == 0

    def peek(self):
        return self.__list.back()

    def __len__(self):
        return self.__list.size

# We can use list in python for using stack features

# # Testing Stack
# my_stack = Stack()
# # my_stack.pop() # you'll get an error! You've to set some checker function in order to get rid off this error!
# my_stack.push(1)
# my_stack.push(2)
# my_stack.push(3)
# print(f"Top block's value in the Stack: {my_stack.peek()}")
# my_stack.push(5)
# print(f"Length of the Stack: {len(my_stack)}")
# print(f"Popped up the last element of the Stack: {my_stack.pop()}")
# print(f"Length of the Stack: {len(my_stack)}")
# print(f"Top block's value in the Stack: {my_stack.peek()}")



# Creating Queue [FIFO (First In First Out)]
class Queue:
    def __init__(self):
        self.__list = DoubleLinkedList()

    def enqueue(self, val): # add element
            self.__list.add(val)

    def deque(self): # remove element
        val = self.__list.front()
        self.__list.remove_first()
        return val

    def front(self):
        return self.__list.front()

    def is_empty(self):
        return self.__list.size == 0

    def __len__(self):
        return self.__list.size

# Built in Queue in Python
from collections import deque

# # Testing Queue
# my_queue = Queue()
# my_queue.enqueue(22) # add 1st element in the Queue
# print(f"Length of the Queue: {len(my_queue)}")
# print(f"Front element of the Queue: {my_queue.front()}")
# my_queue.enqueue(1) # add 2nd element in the Queue
# my_queue.enqueue(4) # add 3rd element in the Queue
# my_queue.enqueue(10) # add 4th element in the Queue
# my_queue.enqueue(111) # add 5th element in the Queue
# print(f"Front element of the Queue: {my_queue.front()}")
# print(f"Length of the Queue: {len(my_queue)}")
# print(f"Deque the 1st element: {my_queue.deque()}")
# print(f"Front element of the Queue: {my_queue.front()}")