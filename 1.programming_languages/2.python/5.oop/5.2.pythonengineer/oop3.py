"""
============================
Section 3
Inheritance
============================
"""
# inherits, extend, override
class Employee:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def work(self):
        print(f"{self.name} is working...")

class SoftwareEngineer(Employee):
    def __init__(self, name, age, level, salary):
        super().__init__(name, age)
        self.level = level
        self.salary = salary

class Designer(Employee):
    pass

se = SoftwareEngineer("Max", 25)
print(se.name, se.age)
se.work()

d = Designer("Philip", 27)
print(d.name, d.age)
d.work()