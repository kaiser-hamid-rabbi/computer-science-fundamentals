"""
============================
Section 4
Encapsulation
============================
"""
class SoftwareEngineer:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self._salary = None # protected. if you want that really private then write __salary(double underscore)
        self._num_bugs_solved = 0
    def code(self):
        self._num_bugs_solved += 1
    # getters
    def get_salary(self):
        return self._salary
    # setters
    def set_salary(self, base_value):
        # check value, enforce constraints
        # if base_value < 1000:
        #     self._salary = 1000
        # if base_value > 20000:
        #     self._salary = 20000
        # self._salary = base_value
        self._salary = self._calculate_salary(base_value)
    def _calculate_salary(self, base_value): # private method. we only need to do this inside this class
        if self._num_bugs_solved < 10:
            return base_value
        if self._num_bugs_solved < 100:
            return base_value * 2
        return base_value * 3

se = SoftwareEngineer("Max", 25)
# print(se.name, se.age) # good practice
# print(se.name, se.age, se._salary) # bad practice. don't use private/protected variables outside the class

se.set_salary(6000)
print(se.get_salary())

for i in range(120):
    se.code()
print(se._num_bugs_solved)

# Abstraction
se.set_salary(6000) 
print(se.get_salary())

# Recap:
# Encapsulation + Abstraction