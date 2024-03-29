# Python Object-Oriented Programming
# class methods and static methods

class Employee:

    num_of_emps = 0
    raise_amt = 1.04 # class variable which is shared among all instances of this (Employee) class

    def __init__(self, first, last, pay):
        self.first = first # instance vairable
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'

        Employee.num_of_emps += 1

    def fullname(self): # regular method in a class automatically take the instance (self) as the first argument
        return '{} {}'.format(self.first, self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

    @classmethod
    def set_raise_amt(cls, amount): # class method in a class automatically take the class (cls) as the first argument
        cls.raise_amt = amount

    @classmethod
    def from_string(cls, emp_str): # class method in a class automatically take the class (cls) as the first argument
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)

    @staticmethod
    def is_workday(day): # static method in a class don't take any argument automatically
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True

emp_1 = Employee('Corey', 'Schafer', 50000)
emp_2 = Employee('Test', 'User', 60000)

# class method
Employee.set_raise_amt(1.05)
# Employee.raise_amt = 1.05
# emp_1.set_raise_amt(1.05)

# print(Employee.raise_amt)
# print(emp_1.raise_amt)
# print(emp_2.raise_amt)






emp_str_1 = 'John-Doe-70000'
emp_str_2 = 'Steve-Smith-30000'
emp_str_3 = 'Jane-Doe-90000'

first, last, pay = emp_str_1.split('-')


# new_emp_1 = Employee(first, last, pay)
new_emp_1 = Employee.from_string(emp_str_1)

print(new_emp_1.email)
print(new_emp_1.pay)

import datetime
my_date = datetime.date(2016, 7, 11)

print(Employee.is_workday(my_date))
