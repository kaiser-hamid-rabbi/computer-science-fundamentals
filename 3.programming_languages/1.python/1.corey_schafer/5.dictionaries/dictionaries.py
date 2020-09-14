# --------------------- Dictionaries ---------------------------------------

# Dictionaries are key, value pairs. Here keys are unique identifiers and values are the value assigned to that identifier.
# It's like Hash map in other language

# student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}

# print(student)
# print(student['name'])
# print(student['courses'])

# Key can be integer as well
# student = { 1: 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
# print(student[1])


# if a key doesn't exist!
# student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
# print(student['phone']) # KeyError: 'phone'

# get function in dictionary
# student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
# print(student.get('name'))
# print(student.get('phone')) # None
# print(student.get('phone', 'Not Found!'))

# Add/ Update item in a dictionary
# student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
# student['phone'] = '55-5555' # add item
# student['name'] = 'Danny' # update item
# print(student.get('phone', 'Not Found!'))
# print(student)
# student.update({'name': 'Ron', 'age': 30, 'courses': ['Math', 'CompSci', 'Art']}) # update multiple items in a dictionary in one shot!
# print(student)

# Delete item in a dictionary
# student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}
# del student['age']
# print(student)

# age = student.pop('age')
# print(student)
# print(age)


# Loop through dictionary
# student = {'name': 'John', 'age': 25, 'courses': ['Math', 'CompSci']}

# print(len(student))
# print(student.keys())
# print(student.values())
# print(student.items())

# for key in student:
	# print(key) 

# for key, value in student.items():
	# print(key, value)