# ----------------------------- 1st lecture --------------------------

# message_1 = "Hello Rabbi's world"
# message_2 = 'Hello Rabbi\'s world'
#
# print(message_1)
# print(message_2)

# multiple_line_message = """Hello everyone!
# today is a wonderful day
# My name is Kaiser Hamid Rabbi
# I am a software engineer"""
#
# print(multiple_line_message)

# message = "Hello World"

# print(len(message))
# print(message[-3])
# print(message[6:9])
# print(message[3:4])
# print(message[0:2])
# print(message[:5])
# print(message[6:])
# print(message[100])

# message = """Hello
# asdfasdfas
# World
# asdfsdaf
# """
# print(message.lower())
# print(message.upper())
# print(message.count("l"))

# if message.find("rabbi") == -1:
#     print("rabbi is not found")
# else:
#     print("rabbi found")




# print(dir(message))
# print(message.isdigit())
# print(message.isupper())
# print(help(str))
# print(help(str.lower))










# --------------------------------------- 2nd lecture -----------------------------------

# message = """Hello world
# asdfasdfas
# asdfsdaf
# asdfasdfsadfghfdghfgh
# fghfghfgh
# """
# message_updated = message.replace("world", "Rabbi")
# print(message_updated)

# String Concatanation
# greeting = "Hello"
# name = "Rabbi"
#
# message = greeting + ", " + name + ". Welcome!" # concatanation
# print(message)


# message = "{}, {}. Welcome everyone".format(greeting.upper(), name) # formatting
# print(message)

# message = f"{greeting.upper()}, {name.lower()}. Welcome everyone" # f-string
# print(message)






# Exercise for lecture 1 and 2
# multiple_line_message = """Hello Sandeep! How are you doing?
# Are you enjoying the journey of learning PYTHON? It's so cool, right?
# Here this is a test to evalute your understanding about lecture 1 and 2"""
#
# Q1: Using slicing techique, find out your name from this long text.
# Q2: Using slicing techique, find out [1 and 2] from this long text.
# Q3: Replace your name with mine from the long text
#
#
# greetings = "Hello"
# name = "Sandeep"
# tutor = "Rabbi"
#
# Q4: using f-string and those string variables above, print this -> "Hello! My name is Sandeep. For learning PYTHON, Rabbi and I will work hard together."







# --------------------------------------- 3rd lecture -----------------------------------

# all data types in a nutshell

# 1. Built-in Data Structures
# 1a. Primitive Data Structures
# integer_value = 45
# floating_value = 10.0
# string_value = "Sandeep"
# boolean_value = True
# # 1b. Non-Primitive Data Structures
# dictionary_value = {"name": "Sandeep", "occupation": "Software Engineer", "age": "30"}
# list_value = ["History", "Math", "Physics", "CompSci"]
# tuple_value = ('History', 'Math', 'Physics', 'CompSci')
# set_value = {'History', 'Math', 'Physics', 'CompSci'}
#
#
# print(type(integer_value))
# print(type(floating_value))
# print(type(string_value))
# print(type(boolean_value))
# print(type(dictionary_value))
# print(type(list_value))
# print(type(tuple_value))
# print(type(set_value))

# 2. User-Defined Data Structures
# Arrays and lists are the same structure with one difference. Lists allow heterogeneous data element storage whereas Arrays allow only homogenous elements to be stored within them.
# Stack(LIFO), Queue(FIFO) ==> Linear Data Structures
# Tree,  Graph ==> Non-Linear Data Structures
# Linked-list, HashMaps
# from array import array as arr
# a = arr("f",[3.2, 6.5, 9.6, 5.4, 2.12, 6.5]) # array is the best choice
# b = arr("d", [9, 5.4, 2.1, 8, 34, 32]) # array is not good choice, for this will use list
# c = [9, 5.4, 2.1, 8, 34, "rabbi", 32]
# print(a)
# print(type(a))
# print(b)
# print(type(b))
# print(c)
# print(type(c))

# first_number = 4
# second_number = 2.567234532453453245324534564563456345643564356
# result = first_number + second_number
# print(type(result))
# https://docs.python.org/3.4/library/array.html
# import numpy as np

# arr_a = np.array([3, 6, 9])
# arr_b = arr_a/3 # Performing vectorized (element-wise) operations
# print(arr_b)

# arithmetic basics
# number_1 = 8 + 2 * 10 # 28
# number_2 = (8 + 2) * 10 # 100
# print(number_1)
# print(number_2)

# a = 18 / 4     # 4.5
# b = 18 % 4 # 2
# c = 5 * 5 * 5 * 5 * 5#
# d = 5 ** 5
#
# print(f"a= {a}, b= {b}, c= {c}, d= {d}")


# pangram = "a quick brown fox jumps over the lazy dog"
# all_characters = "abcdefghijklmnopqrstuvwxyz"
# for character in all_characters:
#     print(character, pangram.count(character))

























































































































