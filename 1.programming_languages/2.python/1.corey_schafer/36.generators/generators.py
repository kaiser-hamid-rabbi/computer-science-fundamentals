# --------------------- Generators - How to use them and the benefits you receive ---------------------------------------


# without generator
# def square_numbers(nums):
# 	result = []
# 	for i in nums:
# 		result.append(i*i)
# 	return result

# my_nums = square_numbers([1,2,3,4,5])
# print(my_nums) # [1, 4, 9, 16, 25]





# convert above code into generator
# Generators don't hold tje entire result in memory 
# def square_numbers(nums):
    # for i in nums:
        # yield (i*i)
# my_nums = square_numbers([1,2,3,4,5])

# print(my_nums) # <generator object square_numbers at 0x7f05af718750>

# print(next(my_nums)) # 1
# print(next(my_nums)) # 4
# print(next(my_nums)) # 9
# print(next(my_nums)) # 16
# print(next(my_nums)) # 25
# print(next(my_nums)) # StopIteration error!

# for num in my_nums:
    # print(num) # to get result once at a time





# convert above code into generator with list comprehension
# my_nums = [x*x for x in [1,2,3,4,5]] # list comprehension
# print(my_nums) # [1, 4, 9, 16, 25]
# for num in my_nums:
#     print(num) 

# with generator
# my_nums = (x*x for x in [1,2,3,4,5]) # generator
# print(my_nums) # <generator object <genexpr> at 0x7f709e255250>
# print(list(my_nums)) # [1, 4, 9, 16, 25] --> you loose the advantages of performance in generator if you cast that into list!