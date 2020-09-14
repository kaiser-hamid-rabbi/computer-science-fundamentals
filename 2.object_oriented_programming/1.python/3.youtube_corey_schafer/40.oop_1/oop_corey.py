# Object Oriented Programming

class Employee:

    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@tigerit.com'

    def fullname(self):
        return '{} {}'.format(self.first, self.last)

emp_1 = Employee('Kaiser', 'Hamid', 10000)
emp_2 = Employee('Jamil', 'Hasnain', 20000)
emp_3 = Employee('Test', 'User', 30000)

# print(emp_1)
# print(emp_2)

print(emp_1.email)
print(emp_2.email)
print(emp_3.email)

# print(f'{emp_1.first} {emp_1.last}')
# print(f'{emp_2.first} {emp_2.last}')

print(emp_1.fullname())
print(emp_2.fullname())
print(emp_3.fullname())

print(emp_1.fullname())
print(Employee.fullname(emp_1))



def decode(self, s, _w=WHITESPACE.match):
    """Return the Python representation of ``s`` (a ``str`` instance
    containing a JSON document).

    """
    obj, end = self.raw_decode(s, idx=_w(s, 0).end())
    end = _w(s, end).end()
    print('end: ', end)
    print('Length of s: ', len(s))
    if end != len(s):
        raise JSONDecodeError("Extra data", s, end)
    return obj
