class Node:
    def __init__(self, value):
        self.next = None
        self.prev = None
        self.val = value

# Creating Double Linked List
class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def add(self, val):
        node = Node(val)
        if self.tail is None: # check if there is no element in the linked list!
            self.head = node
            self.tail = node
            self.size += 1
        else:
            self.tail.next = node
            node.prev = self.tail
            self.tail = node
            self.size += 1

    def __remove_node(self, node):
        if node.prev is None: # search if the node is in the head
            self.head = node.next
        else:
            node.prev.next = node.next

        if node.next is None: # search if the node is in the tail
            self.tail = node.prev
        else:
            node.next.prev = node.prev

        self.size -= 1

    def remove(self, value):
        node = self.head
        while node is not None:
            if node.val == value:
                self.__remove_node(node)
                break
            node = node.next

    def remove_first(self): # my code, have to test that!
        if self.head is not None:
            self.__remove_node(self.head)

    def remove_last(self):
        if self.tail is not None:
            self.__remove_node(self.tail)

    def front(self):
        return self.head.val

    def back(self):
        return self.tail.val

    def __str__(self):
        vals = []
        node = self.head
        while node is not None:
            vals.append(node.val)
            node = node.next
        return f"[{', '.join(str(val) for val in vals)}]"

# # Testing Double Linked List
# my_list = DoubleLinkedList()
# my_list.add(1)
# my_list.add(5)
# my_list.add(5)
# my_list.add(1)
# my_list.add(5)
# my_list.add(5)
# my_list.add(1)
# my_list.add(5)
# my_list.add(1)
# my_list.add(5)
# my_list.add(5)
# my_list.add(2)
# print(my_list)
# my_list.remove_last()
# print(my_list.size)
# my_list.remove(5)
# print(my_list)
# my_list.remove(1)
# print(my_list)
# print(my_list.size)