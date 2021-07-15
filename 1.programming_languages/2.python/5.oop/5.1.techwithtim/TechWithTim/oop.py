# Object Oriented Programming in Python

"""
===========================================
Part - 1
===========================================
""" 
# class Dog:
#     def meow(self):
#         return "meow"
#     def bark(self):
#         print("bark")
#     def add_one(self, x):
#         return x + 1

# d = Dog()
# print(type(d))
# d.bark()
# print(d.meow())
# print(d.add_one(5))

"""
===========================================
Part - 2
===========================================
"""
class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age =age
    def meow(self):
        return "meow"
    def bark(self):
        print("bark")
    def add_one(self, x):
        return x + 1

d = Dog("Golden Retriever", 8)
print(d.name)
print(d.age)