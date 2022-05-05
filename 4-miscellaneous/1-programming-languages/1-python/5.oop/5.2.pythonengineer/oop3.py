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
    def work(self):
        print(f"{self.name} is coding...")
    def debug(self):
        print(f"{self.name} is debugging...")
        

class Designer(Employee):
    def work(self):
        print(f"{self.name} is designing...")
    def draw(self):
        print(f"{self.name} is drawing...")

# se = SoftwareEngineer("Max", 25, 6000)
# print(se.name, se.age)
# se.work()
# d = Designer("Philip", 27, 7000)
# print(d.name, d.age)
# d.work()

# se = SoftwareEngineer("Max", 25, 6000, "Junior")
# se.work()
# se.debug()
# print(se.level)
# # se.draw() # you will get an error because draw() is attached to Designer class only, not attached with SoftwareEngineer class
# d = Designer("Philip", 27, 7000)
# d.work()
# d.draw()

# Polymorphism
employees = [SoftwareEngineer("Max", 20, 5000, "Junior"),
            SoftwareEngineer("Lisa", 30, 9000, "Senior"),
            Designer("Philip", 27, 7000)]
def motivate_employees(employees):
    for employee in employees:
        employee.work()
motivate_employees(employees)

# Recap:
# inheritance: ChildClass(BaseClass)
# inherit, extend, override
# super().__init__()
# polymorphism