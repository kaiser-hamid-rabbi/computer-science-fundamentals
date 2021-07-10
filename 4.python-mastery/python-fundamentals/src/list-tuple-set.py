#/usr/bin/python3
"""
=============================================================
                        4th Lecture
=============================================================
"""


"""
String, Tuple, Set => immutable/non mutable
List, Dictionary => mutable
String, Tuple, List => ordered
Dictionary, Set => unordered
Set => no duplicates
"""


# --------------------- Lists ---------------------------------------
# you can modify Lists(mutable). List is a mutable dynamic array.

courses = ['History', 'Math', 'Physics', 'CompSci']

print(courses)
print(len(courses))

print(courses[0])
print(courses[3])
print(courses[2])
print(courses[-1])
print(courses[-2])


# ---------------------- Slicing -------------------------

# courses = ['History', 'Math', 'Physics', 'CompSci', 'Chemistry']
# print(courses[0:2])
# print(courses[:2])
# print(courses[2:])
# print(courses[3:])

# ---------------------- Add / Remove items in Lists -------------------------

# courses = ['History', 'Math', 'Physics', 'CompSci']
# Append function
# courses.append('Art')
# print(courses)

# Insert function
# courses.insert(0, 'Art')
# print(courses)
# courses.insert(3, 'Religion')
# print(courses)
# courses.insert(4, 'English')
# print(courses)

# Extend function
# courses_2 = ['Art', 'Education']
# courses.insert(0, courses_2)
# print(courses)
# print(courses[0])

# courses.extend(courses_2)
# print(courses)

# courses.remove('Math')
# print(courses)

# courses.pop() # remove last value of the List
# print(courses)

# popped = courses.pop()
# print(popped)
# print(courses)

# ---------------------- Reverse Lists -------------------------

# courses = ['History', 'Math', 'Physics', 'CompSci']
# courses.reverse()
# print(courses)

# ---------------------- Sorting Lists -------------------------

# sort function (change value in place)

# courses = ['History', 'Math', 'Physics', 'CompSci']
# courses.sort() # sort in ascending order
# print(courses)
# courses.sort(reverse=True) # # sort in descending order
# print(courses)

# nums = [1, 5, 2, 4, 3 ]
# nums.sort() # sort in ascending order
# print(nums)
# nums.sort(reverse=True) # sort in descending order
# print(nums)

# sorted function (don't change value in place)

# courses = ['History', 'Math', 'Physics', 'CompSci']
# sorted(courses)
# print(courses)
#
# sorted_courses = sorted(courses)
# print(sorted_courses)

# ---------------------- Built-in min, max, sum of Lists -------------------------

# nums = [1, 5, 2, 4, 3 ]
#
# print(min(nums))
# print(max(nums))
# print(sum(nums))

# ---------------------- Find value or index from Lists -------------------------

# courses = ['History', 'Math', 'Physics', 'CompSci']
#
# print(courses.index('CompSci'))

# Check a value exist or not
# print('Art' in courses) # False
# print('Math' in courses) # False

# ---------------------- For loop in Lists -------------------------

# in keyword for loop
# for course in courses:
# 	print(course)

# enumerate function in for loop
# for index, course in enumerate(courses):
# 	print(index, course)

# for index, course in enumerate(courses, start=1):
# 	print(index, course)

# ---------------------- Convert lists into strings -------------------------

# using join
# courses = ['History', 'Math', 'Physics', 'CompSci']
#
# course_str = ', '.join(courses)
# print(type(course_str))
# print(course_str)
#
# course_str = ' - '.join(courses)
# print(course_str)

# ---------------------- Convert strings into lists -------------------------

# courses = ['History', 'Math', 'Physics', 'CompSci']
#
# course_str = ' - '.join(courses)
# print(type(course_str))
# print(course_str)
#
# new_list = course_str.split(' - ')
# print(type(new_list))
# print(new_list)

# --------------------------------------------------------------------------------------------------------------------

# ---------------------- Tuples -------------------------

# you can't modify tuples(immutable)
# Compare List and Tuple in order to understand what is mutable and immutable

# Mutable
# list_1 = ['History', 'Math', 'Physics', 'CompSci']
# list_2 = list_1

# print(list_1)
# print(list_2)

# list_1[0] = 'Art'

# print(list_1)
# print(list_2)

# Immutable
# tuple_1 = ('History', 'Math', 'Physics', 'CompSci')
# tuple_2 = tuple_1

# print(tuple_1)
# print(tuple_2)

# tuple_1[0] = 'Art' # TypeError: 'tuple' object does not support item assignment.

# print(tuple_1)
# print(tuple_2)

# we can't append or remove anything from tuple. Other than that, we can do all the things like lists e.g. access values, loop through tuple.

# ---------------------- Sets -------------------------

# unordered and also have no duplicates

# cs_courses = {'History', 'Math', 'Physics', 'CompSci'}
# print(cs_courses) # get values in different order each time

# Remove duplicates
# cs_courses = {'History', 'Math', 'Physics', 'CompSci', 'Math'}
# print(cs_courses) # get values in different order each time

# Membership test(you can do it in List and tuples with 'in' keyword)
# cs_courses = {'History', 'Math', 'Physics', 'CompSci', 'Math'}
# print('Math' in cs_courses) # sets do membership test a lot more efficiently than lists and tuples. Membership test in sets is most optimized.

# Checking similarity and disimilarities(optimized than lists and tuples!)
# cs_courses = {'History', 'Math', 'Physics', 'CompSci'}
# art_courses = {'History', 'Math', 'Art', 'Design'}

# print(cs_courses.intersection(art_courses))
# print(cs_courses.difference(art_courses))
# print(cs_courses.union(art_courses))


# --------------------- Create empty Lists, Tuples and Sets ------------------------

# Empty list
# empty_list = []
# empty_list = list() # built-in list class

# Empty tuples
# empty_tuple = ()
# empty_tuple = tuple() # built-in tuple class

# Empty sets
# empty_set = {} # This isn't right! It's a dictionary!
# empty_set = set()