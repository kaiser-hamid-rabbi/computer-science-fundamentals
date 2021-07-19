"""
=====================
Fibonacci Number
=====================
"""
# # Print first 10 fibonacci number
# def find_fib(n):
#     if n <= 2:
#         return 1
#     fib_x, fib_next = 1, 1
#     i = 3
#     while i <= n:
#         i += 1
#         fib_x, fib_next = fib_next, fib_x + fib_next
#     # return fib_x # print till 34
#     return fib_next

# for x in range(1, 11):
#     print(find_fib(x))

# Fibonacci number using list
def find_fib(n):
        if n <= 2:
            return 1
        fib_x, fib_next = 1, 1
        i = 3
        while i <= n:
            i += 1
            fib_x, fib_next = fib_next, fib_x + fib_next
        return fib_next
def list_fib(n):
        fib_list = [1, 1]
        if n <= 2:
            return fib_list[:n]
        fib_x, fib_next = 1, 1
        i = 3
        while i <= n:
            i += 1
            fib_x, fib_next = fib_next, fib_x + fib_next
            fib_list.append(fib_next)
        return fib_list
if __name__ == "__main__":
    for x in range(1, 11):
        print(find_fib(x))
    print(list_fib(1))
    print(list_fib(2))
    print(list_fib(10))