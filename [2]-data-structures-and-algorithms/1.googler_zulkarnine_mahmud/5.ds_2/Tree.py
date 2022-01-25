from ds_2 import Queue
from ds_2 import Stack
from BinaryTreePrinter import BinaryTreePrinter

class TreeNode:
    def __init__(self, val):
        self.left = None
        self.right = None
        self.val = val

class BinaryTree:
    def __init__(self):
        self.root = None

    def insert(self, val):
        if self.root is None:
            self.root = TreeNode(val)
        else:
            nodes = Queue()
            nodes.enqueue(self.root)

            while True:
                checking_node = nodes.deque()
                if checking_node.left is None:
                    checking_node.left = TreeNode(val)
                    return
                elif checking_node.right is None:
                    checking_node.right = TreeNode(val)
                    return
                else:
                    nodes.enqueue(checking_node.left)
                    nodes.enqueue(checking_node.right)

    def __str__(self):
        tree_printer = BinaryTreePrinter()
        return tree_printer.get_tree_string(self.root)

    def contains(self, val): # for Binary Tree
        nodes = Stack()
        nodes.push(self.root)

        while not nodes.is_empty():
            node = nodes.pop()
            print(f"Checking node: {node.val}")
            if node.val == val:
                return True
            if node.right is not None:
                nodes.push(node.right)
            if node.left is not None:
                nodes.push(node.left)
        return False

class BST:
    def __init__(self):
        self.root = None

    def __insert_value(self, node, value):
        if node is None:
            return
        if node.val == value:
            return
        elif value < node.val:
            if node.left is None:
                node.left = TreeNode(value)
                return
            self.__insert_value(node.left, value)
        else:
            if node.right is None:
                node.right = TreeNode(value)
                return
            self.__insert_value(node.right, value)

    def insert(self, val):
        if self.root is None:
            self.root = TreeNode(val)
        else:
            self.__insert_value(self.root,val)

    def __str__(self):
        tree_printer = BinaryTreePrinter()
        return tree_printer.get_tree_string(self.root)

    def __in_order(self, node):
        # sorted_list = []
        if node is None:
            return
        self.__in_order(node.left)
        # sorted_list.append(node.val)
        print(node.val, end=" ")
        # print(sorted_list)
        self.__in_order(node.right)

    def in_order(self):
        self.__in_order(self.root)

    def contains(self, val): # for DFS (Depth-First Search)
        nodes = Stack()
        nodes.push(self.root)

        while not nodes.is_empty():
            node = nodes.pop()
            print(f"Checking node: {node.val}")
            if node.val == val:
                return True
            elif val < node.val:
                if node.left is not None:
                    nodes.push(node.left)
            else:
                if node.right is not None:
                    nodes.push(node.right)
        return False


# Test Binary Tree
# my_tree = BinaryTree()
# for c in ['a', 'b', 'c', 'd', 'e', 'f', 'g']:
#     my_tree.insert(c)
#     print(my_tree)

# for c in ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o']:
#     my_tree.insert(c)
# print(my_tree)


# # Test Binary Search Tree (BST)
# bst = BST()
# for i in [8, 2, 1, 10, 100, 50, 40, 23, 16, 7, 9, 200, 150, 300]:
#     bst.insert(i)
# print(bst)
#
# bst.in_order()
# print()
# print(f"Contains '10' is: {bst.contains(10)}")
# print(f"Contains '0' is: {bst.contains(0)}")
# print(f"Contains '150' is: {bst.contains(150)}")


# Test with Binary Tree
bst = BinaryTree()
for i in [8, 2, 1, 10, 100, 50, 40, 23, 16, 7, 9, 200, 150, 300]:
    bst.insert(i)
    print(bst)
print()
print(f"Contains '10' is: {bst.contains(10)}")
print(f"Contains '0' is: {bst.contains(0)}")
print(f"Contains '150' is: {bst.contains(150)}")
