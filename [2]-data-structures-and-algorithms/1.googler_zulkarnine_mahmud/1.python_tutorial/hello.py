## Take user input using python built-in function
# username = input("Please enter your name: ")
# print(f"Hello World {username}!")

## Function
# def add_two_values(first, second):
#     return first + second
#
# number_1 = 10
# number_2 = 3
# sum = add_two_values(number_1, number_2)
#
# print(f"{number_1} + {number_2} = {number_1 + number_2}")
# print(f"{number_1} + {number_2} = {sum}")
# print(add_two_values(number_1, number_2))
# print("Bello ",sum, sum)

## Data Types, Arithmetic operations and String
# number_value = 32
# second_value = 4
# # print(type(number_value))
# person_name = "Kaiser Hamid Rabbi"
# food = "Burger"
# # print(type(person_name))
# value2 = 100
#
# add = number_value + second_value
# sub = number_value - second_value
# mul = number_value * 2
# div = number_value / 5
# div_int = number_value // 2
# remainder = number_value % 2
#
# concatenated_string = person_name + " " + food
# kaiser_with_value = person_name + " " + str(value2)
#
# # print(f"person + value: {person_name + number_value}") # give you an error!
# print(f"concatenated_string: {concatenated_string}")
# print(f"kaiser_with_value: {kaiser_with_value}")
#
# print(f"Addition: {add}")
# print(f"Subtraction: {sub}")
# print(f"Multiplication: {mul}")
# print(f"Division: {div}")
# print(f"div_int: {div_int}")
# print(f"remainder: {remainder}")
# print(f"Length of name: {len(kaiser_with_value)}")

## List
# grocery_list = ["rice", "potato", "tomato"]
# l2 = list()
# second_item = grocery_list[1]
# print(f"second_item: {second_item}")
# print(f"last_item: {grocery_list[-1]}")
# print(f"second_item: {grocery_list[-2]}")
#
# print(f"grocery_list: {grocery_list}")
# grocery_list.append("water")
# print(f"grocery_list: {grocery_list}")
# print(l2)
# l2.append(4)
# print(l2)
# l2.append("computer")
# print(l2)


## list sorting
# grocery_list = ["rice", "potato", "tomato"]
# print(grocery_list)
# grocery_list.sort()
# print(grocery_list)
#
# numbers = [1, 70, 5, 3, 40, 76]
# numbers.sort()
# print(numbers)

# sorted_list = sorted(numbers)
# print(numbers)
# print(sorted_list)

## Condition
# marks = int(input("What is your marks in programming: "))
#
# def show_grade(grade):
#     print(f"You got: {grade}!")

# if marks >= 80 and marks <= 100:
#     show_grade("A+")
#     # print("You got A+!")
# elif marks < 80 and marks >= 70:
#     show_grade("A")
# elif marks < 70 and marks >= 60:
#     show_grade("A-")
# elif marks > 33 and marks < 60:
#     show_grade("Passed")
# elif marks > 100:
#     print("Please enter your valid marks between 0-100!")
# else:
#     show_grade("F")

# the_use_is_good = True
# print(the_use_is_good)
# the_use_is_good = 80 < 60
# print(the_use_is_good)
#
# if marks > 80 or marks < 10:
#     print("You are very good or very bad!")
#     if marks > 80:
#         print("Excellent!")
#     else:
#         print("Not so good!")
#
# else:
#     print("You are ok!")
#
# print("Finished!")


## Loop

# def is_even(number):
#     if number % 2 == 0:
#         return True
#     else:
#         return False
#
# even_numbers = []
# odd_numbers = []
# starting = 0
#
# user_input = int(input("Limit: "))

# while starting <= user_input:
#     if is_even(starting):
#         # print(f"{starting} is Even!")
#         even_numbers.append(starting)
#
#     else:
#         # print(f"{starting} is Odd!")
#         odd_numbers.append(starting)
#     # starting += 1
#     starting = starting + 1

# for every_value in range(0, user_input):
#     if is_even(every_value):
#         even_numbers.append(every_value)
#     else:
#         odd_numbers.append(every_value)
#
#
#
# print(f"even_numbers: {even_numbers}")
# print(f"odd_numbers: {odd_numbers}")
# print("Finished!")

grocery = ["rice", "water", "tomato", "onion", "ginger"]


# for item in grocery:
#     if item == "tomato":
#         # continue # [rice, water, ginger]
#         break # [rice, water]
#     print(item)

# for i in range(0, 10, 2): # 3rd argument in range() is number of steps
#     print(i)

# for i in range(0, len(grocery)):
#     print(grocery[i])

## File IO
## please check practice module!



















