"""
============================
Section 3
Inheritance
============================
"""
# inherits, extend, override
class Employee:
    def __init__(self, name, age, salary):
        self.name = name
        self.age = age
        self.salary = salary
    def work(self):
        print(f"{self.name} is working...")

class SoftwareEngineer(Employee):
    def __init__(self, name, age, salary, level):
        super().__init__(name, age, salary)
        self.level = level
    def debug(self):
        print(f"{self.name} is debugging...")
        

class Designer(Employee):
    def draw(self):
        print(f"{self.name} is drawing...")

# se = SoftwareEngineer("Max", 25, 6000)
# print(se.name, se.age)
# se.work()
# d = Designer("Philip", 27, 7000)
# print(d.name, d.age)
# d.work()

se = SoftwareEngineer("Max", 25, 6000, "Junior")
se.work()
print(se.level)
se.debug()
se.draw() # you will get an error because draw() is attached to Designer class only, not attached with SoftwareEngineer class
d = Designer("Philip", 27, 7000)
d.work()
d.draw()
