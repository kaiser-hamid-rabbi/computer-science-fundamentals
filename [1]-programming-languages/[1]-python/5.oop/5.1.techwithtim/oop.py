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
Data passing between two classes
===========================================
"""
# class Student:
#     def __init__(self, name, age, grade):
#         self.name = name
#         self.age = age
#         self.grade = grade # 0 - 100
#     def get_grade(self):
#         return self.grade

# class Course:
#     def __init__(self, name, max_students):
#         self.name = name
#         self.max_students = max_students
#         self.students = []
#     def add_student(self, student):
#         if len(self.students) < self.max_students:
#             self.students.append(student)
#             return True
#         return False
#     def get_average_grade(self):
#         value = 0
#         for student in self.students:
#             value += student.get_grade()
#         return value / len(self.students)

# s1 = Student("Tim", 19, 95)
# s2 = Student("Bill", 20, 75)
# s3 = Student("Jill", 18, 65)

# course = Course("Science", 2)
# course.add_student(s1)
# course.add_student(s2)
# print(course.students[0].name)
# print(course.students[1].name)
# print(course.get_average_grade())

# course.add_student(s3)
# print(course.add_student(s3))
# # print(course.students[2].name) # you will get an error
# print(course.get_average_grade())

"""
===========================================
Inheritence
===========================================
"""
# # redundent __init__ functions
# class Cat:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def speak(self):
#         print("Meow")

# class Dog:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def speak(self):
#         print("Bark")

# # ---------------------------------------
# class Pet:
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#     def show(self):
#         print(f"I am {self.name} and I am {self.age} years old.")
#     def speak(self):
#         print("I don't know what I say...")

# class Cat(Pet):
#     def __init__(self, name, age, color):
#         super().__init__(name, age)
#         self.color = color
#     def speak(self):
#         print("Meow")
#     def show(self):
#         print(f"I am {self.name} and I am {self.age} years old and I am {self.color}.")

# class Dog(Pet):
#     def speak(self):
#         print("Bark")

# class Fish(Pet):
#     pass

# p = Pet("Goldern Retriever", 10)
# p.show()
# p.speak()
# c = Cat("Stray Cat", 5, "Black")
# c.show()
# c.speak()
# d = Dog("Samoyed", 12)
# d.show()
# d.speak()
# f = Fish("Bubbles", 3)
# f.show()
# f.speak()

"""
=====================================================================
class attributes + methods and instance attributes + methods
=====================================================================
"""
# class Person:
#     number_of_people = 0 # class attribute

#     def __init__(self, name):
#         self.name = name # instance attribute
#         # Person.number_of_people += 1
#         Person.add_person()
#     def get_name(self): # instance method
#         return self.name
#     @classmethod # class method
#     def number_of_people_(cls):
#         return cls.number_of_people
#     @classmethod # class method
#     def add_person(cls):
#         cls.number_of_people += 1

# # p1 = Person("Tim")
# # print(Person.number_of_people)
# # p2 = Person("Jill")
# # print(Person.number_of_people)

# # print(p1.number_of_people)
# # print(p2.number_of_people)
# # print(Person.number_of_people)
# # Person.number_of_people = 8
# # print(Person.number_of_people)
# # print(p1.number_of_people)
# # Person.number_of_people = 9
# # print(p2.number_of_people)

# p1 = Person("Tim")
# p2 = Person("Jill")
# print(Person.number_of_people_())

"""
=====================================================================
Static method
=====================================================================
"""
# static method can do something but can't change anything
class Math:
    @staticmethod
    def add1(x):
        return x + 1
    @staticmethod
    def add5(x):
        return x + 5
    @staticmethod
    def add10(x):
        return x + 10
    @staticmethod
    def pr():
        print("run...")

print(Math.add1(5))
print(Math.add5(5))
print(Math.add10(5))
Math.pr()