# Python Object-Oriented Programming
# Classes and instances

class Employee:

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'

    def fullname(self):
        return '{} {}'.format(self.first, self.last)


emp_1 = Employee('Corey', 'Schafer', 50000)
emp_2 = Employee('Test', 'User', 60000)

# print(emp_1)
# print(emp_2)

# Without creating instances of a class, we can manually assign value like below.
# emp_1.first = 'Corey'
# emp_1.last = 'Schafer'
# emp_1.email = 'Corey.Schafer@company.com'
# emp_1.pay = 50000

# emp_2.first = 'Test'
# emp_2.last = 'User'
# emp_2.email = 'Test.User@company.com'
# emp_2.pay = 60000

# print(emp_1.email)
# print(emp_2.email)
# print('{} {}'.format(emp_1.first, emp_1.last))
# print(emp_1.fullname) # give the method address instead of the return value of that method
# print(emp_1.fullname())
# print(emp_2.fullname())

# important concept! the next 2 lines actually do the same thing!
print(emp_1.fullname())
print(Employee.fullname(emp_1))

print(emp_2.fullname())
print(Employee.fullname(emp_2))




