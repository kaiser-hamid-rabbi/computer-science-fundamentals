# --------------------- Sorting Lists, Tuples and Objects ---------------------------------------

# --------------------- Sorting Lists ---------------------------------------
# li = [9, 1, 8, 2, 7, 3, 6, 4, 5]

# s_li = sorted(li) # return new sorted list
# s_li = li.sort() # you will get None valur here, because it doesn't return sorted list. It sort values in place

# s_li = sorted(li, reverse=True) # return new sorted list

# print('Sorted Variable:\t', s_li)

# li.sort() # sort list in place(no need to create seperate variable to store sorted list)
# li.sort(reverse=True)

# print('Original Variable:\t', li)


# --------------------- Sorting Tuples ---------------------------------------

# tup = (9, 1, 8, 2, 7, 3, 6, 4, 5)

# tup.sort() # get an error because tuples don't have sort method!
# s_tup = sorted(tup) # list of sorted tuple value
# print('Tuple:\t', s_tup)

# --------------------- Sorting Dictionary ---------------------------------------
# di = {'name': 'Corey', 'job': 'programming', 'age': None, 'os': 'Mac'}
# di.sort() # get an error because dictionary don't have sort method!
# s_di = sorted(di) # sort the keys of the dictionary and return a list of that
# print('Dict:\t', s_di)


# --------------------- Sorting List by its absolute value ---------------------------------------
# li = [-6, -5, -4, 1, 2, 3]
# s_li = sorted(li)
# print(s_li)

# s_li = sorted(li, key=abs)
# print(s_li)


# class Employee():
# 	def __init__(self, name, age, salary):
# 		self.name = name
# 		self.age = age
# 		self.salary = salary

# 	def __repr__(self):
# 		return '({}, {}, ${})'.format(self.name, self.age, self.salary)

# e1 =Employee('Carl', 37, 70000)
# e2 =Employee('Sarah', 29, 80000)
# e3 =Employee('John', 43, 90000)

# employees = [e1, e2, e3]
# s_employees = sorted(employees) # get an error because we have to specify the key to sort
# print(s_employees)

# sorted employees based on their names
# employees = [e1, e2, e3]
# def e_sort(emp):
# 	return emp.name
# s_employees = sorted(employees, key=e_sort)
# print(s_employees)


# sorted employees based on their age
# employees = [e1, e2, e3]
# def e_sort(emp):
# 	return emp.age
# s_employees = sorted(employees, key=e_sort)
# print(s_employees)


# sorted employees based on their salary
# employees = [e1, e2, e3]
# def e_sort(emp):
# 	return emp.salary
# s_employees = sorted(employees, key=e_sort)
# print(s_employees)


# sorted employees in reverse based on their salary
# employees = [e1, e2, e3]
# def e_sort(emp):
# 	return emp.salary
# s_employees = sorted(employees, key=e_sort, reverse=True)
# print(s_employees)



# sorted employees based on their salary using lambda function
# employees = [e1, e2, e3]
# s_employees = sorted(employees, key=lambda e: e.salary)
# print(s_employees)




# sorted employees in reverse based on their salary using attrgetter
# from operator import attrgetter

# employees = [e1, e2, e3]
# s_employees = sorted(employees, key=attrgetter('salary'), reverse=True)
# print(s_employees)