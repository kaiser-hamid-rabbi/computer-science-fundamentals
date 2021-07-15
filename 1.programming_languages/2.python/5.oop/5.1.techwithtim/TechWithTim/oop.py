# Object Oriented Programming in Python

"""
===========================================
Class and Instance
===========================================
""" 
# class Dog:
#     def meow(self):
#         return "meow"
#     def bark(self):
#         print("bark")
#     def add_one(self, x):
#         return x + 1

# d = Dog() # instance of Dog class
# print(type(d))
# d.bark()
# print(d.meow())
# print(d.add_one(5))

"""
===========================================
Constructor, method
===========================================
"""
# class Dog:
#     def __init__(self, name, age):
#         # instance variables
#         self.name = name
#         self.age =age
#     def meow(self):
#         return "meow"
#     def bark(self):
#         print("bark")
#     def add_one(self, x):
#         return x + 1

# d1 = Dog("Golden Retriever", 8)
# print(d1.name)
# print(d1.age)
# d2 = Dog("Samoyed", 10)
# print(d2.name)
# print(d2.age)

"""
===========================================
Encapsulation
===========================================
"""
# class Dog:
#     def __init__(self, name, age):
#         # instance variables
#         self._name = name
#         self._age =age
#     def get_name(self): # getter
#         return self._name
#     def set_name(self, name): # setter
#         self._name = name
#     def get_age(self):
#         return self._age
#     def set_age(self, age):
#         self._age = age

# d1 = Dog("Golden Retriever", 8)
# print(d1.get_name())
# print(d1.get_age())
# d1.set_name("Ricky")
# d1.set_age(10)
# print(d1.get_name())
# print(d1.get_age())

# d2 = Dog("Samoyed", 12)
# print(d2.get_name())
# print(d2.get_age())
# d2.set_name("Monty")
# d2.set_age(14)
# print(d2.get_name())
# print(d2.get_age())

"""
===========================================
Encapsulation
===========================================
"""
class Student:
    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade # 0 - 100
    def get_grade(self):
        return self.grade

class Course:
    def __init__(self, name, max_students):
        self.name = name
        self.max_students = max_students
        self.students = []