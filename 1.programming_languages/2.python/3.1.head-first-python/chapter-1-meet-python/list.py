# movies = ["The Holy Grail", "The Life of Brian", "The Meaning of Life"]
# print(movies[1])

# cast = ["Cleese", 'Palin', 'Jones', "Idle"]
# print(cast)
# print(len(cast))
# cast.append("Gilliam")
# print(cast)
# tmp = cast.pop()
# print(tmp)
# print(cast)
# cast.extend(["Gilliam", "Chapman"])
# print(cast)
# cast.remove("Chapman")
# print(cast)
# cast.insert(0, "Chapman")
# print(cast)



movies = [
"The Holy Grail", 1975, "Terry Jones & Terry Gilliam", 91,
["Graham Chapman",
["Michael Palin", "John Cleese", "Terry Gilliam", "Eric Idle", "Terry Jones"]]]

# print(movies[4][1][3])

# for each_item in movies:
#     print(each_item)

# for each_item in movies:
#     if isinstance(each_item, list):
#         for nested_item in each_item:
#             print(nested_item)
#     else:
#         print(each_item)

# for each_item in movies:
#     if isinstance(each_item, list):
#         for nested_item in each_item:
#             if isinstance(nested_item, list):
#                 for deeper_item in nested_item:
#                     print(deeper_item)
#             else:
#                 print(nested_item)
#     else:
#         print(each_item)

def print_lol(the_list):
    for each_item in the_list:
        if isinstance(each_item, list):
            print_lol(each_item)
        else:
            print(each_item)
print_lol(movies)