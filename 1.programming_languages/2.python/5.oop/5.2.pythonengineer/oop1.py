"""
============================
Section 1
Create Classes
Class vs Instance
============================
"""
# position, name, age, level, salary
se1 = ["Software Engineer", "Max", 20, "Junior", 5000]
se2 = ["Software Engineer", "Lisa", 25, "Senior", 7000]
# List is not a perfect data structure for this kind of complex data

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

# instance
se1 = SoftwareEngineer("Max", 20, "Junior", 5000)
print(se1.name, se1.age)
# SoftwareEngineer.name # you will get an error
print(se1.alias)
print(SoftwareEngineer.alias)
se2 = SoftwareEngineer("Lisa", 25, "Senior", 7000)
print(se2.name, se1.age)
# SoftwareEngineer.name # you will get an error
print(se2.alias)
print(SoftwareEngineer.alias)

# Recap:
# create a class (blueprint)
# create a instance (object)
# class vs instance
# instance attributes: defined in __init__(self)
# class attributes