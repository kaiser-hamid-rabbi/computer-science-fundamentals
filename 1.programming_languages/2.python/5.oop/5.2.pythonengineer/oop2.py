"""
============================
Section 2
Functions in Classes
============================
"""
# position, name, age, level, salary
se1 = ["Software Engineer", "Max", 20, "Junior", 5000]
se2 = ["Software Engineer", "Lisa", 25, "Senior", 7000]
d1 = ["Designer", "Philip"]
# List is not a perfect data structure for this kind of complex data

# def code(se):
#     print(f"{se[1]} is writing code...")
# code(se1)
# code(d1) # it's not appropriate

# class
class SoftwareEngineer:
    # class attribute
    alias = "Keyboard Magician"
    def __init__(self, name, age, level, salary):
        # instance attributes
        self.name = name
        self. age = age
        self.level = level
        self.salary = salary
    # instance method
    def code(self):
        print(f"{self.name} is writing code...")
    # instance method
    def code_in_language(self, language):
        print(f"{self.name} is writing code in {language}")
    # instance method
    # def information(self):
    #     information = f"name = {self.name}, age = {self.age}, level = {self.level}, salary = {self.salary}"
    #     return information
    # Dunder method
    def __str__(self):
        information = f"name = {self.name}, age = {self.age}, level = {self.level}, salary = {self.salary}"
        return information

# instance
se1 = SoftwareEngineer("Max", 20, "Junior", 5000)
se2 = SoftwareEngineer("Lisa", 25, "Senior", 7000)

# se1.code()
# se2.code()
# se1.code_in_language("Python")
# se2.code_in_language("C++")
# print(se1.information())
# print(se2.information())

print(se1)
print(se2)