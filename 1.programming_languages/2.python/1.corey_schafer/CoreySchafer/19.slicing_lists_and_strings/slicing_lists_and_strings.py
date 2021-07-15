# --------------------- Slicing Lists and Strings ---------------------------------------

# Slicing Lists
# my_list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
#          0, 1, 2, 3, 4, 5, 6, 7, 8, 9
#        -10,-9,-8,-7,-6,-5,-4,-3,-2,-1

# print(my_list[0])
# print(my_list[5])
# print(my_list[-1])
# print(my_list[-10])


# list[start:end:step]
# print(my_list[0:6]) # index value of 0-5
# print(my_list[3:8]) # index value of 3-7
# print(my_list[-7:-2]) # index value of 3-7
# print(my_list[1:-2]) # index value of 1-7
# print(my_list[1:]) # index value of 1-end
# print(my_list[5:]) # index value of 5-end
# print(my_list[:-1]) # index value of 0-8
# print(my_list[:]) # copy of the entire list

# print(my_list[2:-1:1]) # index value of 2-8 with step 1(default)
# print(my_list[2:-1:2]) # index value of 2-8 with step 2
# print(my_list[2:-1:-1]) # return empty list
# print(my_list[-1:2:-1]) # index value of 9-3 in reverse
# print(my_list[-2:1:-1]) # index value of 8-2 in reverse
# print(my_list[-2:1:-2]) # index value of 8-2 in reverse with step 2
# print(my_list[::-1]) # reverse entire list


# Slicing Strings
# sample_url = 'http://coreyms.com'
# print(sample_url)

# Reverse the url
# print(sample_url[::-1])

# # Get the top level domain
# print(sample_url[-4:])

# Print the url without the http://
# print(sample_url[7:])

# Print the url without the http:// or the top level domain
# print(sample_url[7:-4])