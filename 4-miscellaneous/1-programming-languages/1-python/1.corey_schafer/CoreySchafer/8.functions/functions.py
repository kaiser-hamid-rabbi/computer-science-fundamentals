# --------------------- Functions ---------------------------------------

# define empty function
# def hello_func():
	# pass
# print(hello_func) # it won't execute the function
# print(hello_func())


# def hello_func():
# 	print('Hello Function!')

# hello_func()

# Keeping your code DRY (Don't Repeat Yourself) 


# return function
# def hello_func():
# 	return 'Hello Function!'

# hello_func() # it won't print anything!
# print(hello_func())
# print(hello_func().upper())


# pass arguments to functions

# positional arguments
# def hello_func(greeting):
# 	# return '{} Function!'.format(greeting)
# 	return f'{greeting} Function!'

# print(hello_func('Hi'))

# default/ keyword arguments
# def hello_func(greeting, name = 'Jane'):
# 	return f'{greeting}, {name}!'

# print(hello_func('Hi'))

# Required positional arguments has to come before your keyword argument. Otherwise you will get an error!


# if we don't know how many positional and keyword arguments then we use *args and **kwargs(it's just a convention)
# def student_info(*args, **kwargs):
# 	print(args) # return tuple
# 	print(kwargs) # return dictionary

# student_info('Math', 'Art', name='Jane', age=22)

# def student_info(*args, **kwargs):
# 	print(args) # return tuple
# 	print(kwargs) # return dictionary

# courses = ['Math', 'Art']
# info = {'name': 'Jane', 'age': 22}

# student_info(courses, info) # it won't work as expected to unpack arguments
# student_info(*courses, **info) # it will work as expected to unpack arguments



# Number of days per month. First value placeholder for indexing purposes.

# month_days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


# def is_leap(year):
#     """Return True for leap years, False for non-leap years.""" #---> It's doc string to describe what the function will do(good practice!)

#     return year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)


# def days_in_month(year, month):
#     """Return number of days in that month in that year."""

#     if not 1 <= month <= 12:
#         return 'Invalid Month'

#     if month == 2 and is_leap(year):
#         return 29

#     return month_days[month]

# print(is_leap(2017))
# print(is_leap(2020))
# print(days_in_month(2017, 2))
# print(days_in_month(2020, 2))