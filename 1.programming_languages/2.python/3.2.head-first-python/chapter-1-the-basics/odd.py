# from datetime import datetime

# odds = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59]

# right_this_minute = datetime.today().minute

# if right_this_minute in odds:
#     print("This minute seems a little odd!")
# else:
#     print("Not an odd minute!")



# from os import getcwd

# where_am_I = getcwd()
# print("I'm in:" ,where_am_I)

# import sys
# print("My Operating System:", sys.platform)
# print("Python version:", sys.version)



from datetime import datetime

odds = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59]

right_this_minute = datetime.today().minute

if right_this_minute in odds:
    print("This minute seems a little odd!")
else:
    print("Not an odd minute!")