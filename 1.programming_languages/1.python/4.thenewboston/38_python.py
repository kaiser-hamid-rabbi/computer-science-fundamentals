# def drop_first_last(grades):
#     first, *middle, last = grades
#     avg = sum(middle) / len(middle)
#     print(avg)

# drop_first_last([65, 76, 98, 54, 21])
# drop_first_last([65, 76, 98, 54, 21, 54, 65, 99, 88, 78])

# way 1 - not recommended
# item = ['December 23, 2015', 'Bread Gloves', 8.51]
# print(item[0])
# way 2 - unpack list - recommended
date, name, price = ['December 23, 2015', 'Bread Gloves', 8.51]
print(name)
