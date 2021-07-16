"""
============================
Section 5
Properties
============================
"""
# Normal way of getter-setter
# class SoftwareEngineer:
#     def __init__(self):
#         self._salary = None
#     def get_salary(self):
#         return self._salary
#     def set_salary(self, value):
#         self._salary = value

# se = SoftwareEngineer()
# se.set_salary(6000)
# print(se.get_salary())

# Property
# More Pythonic way 
class SoftwareEngineer:
    def __init__(self):
        self._salary = None
    @property # getter
    def salary(self):
        return self._salary
    @salary.setter # setter
    def salary(self, value):
        # check, constraints, calculations
        self._salary = value
    @salary.deleter
    def salary(self):
        del self._salary

se = SoftwareEngineer()
se.salary = 6000
print(se.salary)
del se.salary
# print(se.salary) # you will get an error because of deleting se.salary attribute with deleter properties

# Recap:
# public, protected, private
# _foo(), _x
# getter -> @property
# setter -> @x.setter
# deleter -> @x.deleter