import math
import time

user_num = int(input("Upper limit for prime: "))

prime_set = set()

# # Version 1
# def is_prime_v1(num):
#     """ Return 'True' if 'n' is a prime number. False otherwise. """
#     if num == 1:
#         return False # 1 is not a prime number!
#
#     for number in range(2, int(math.sqrt(num) + 1)):
#         if num % number == 0:
#             return False
#     return True
#
# t0 = time.time()
# for n in range(1, user_num + 1):
#     if is_prime_v1(n):
#         prime_set.add(n)
# print(prime_set)
# print(sorted(prime_set))
#
# t1 = time.time()
# print(f"Time required: {t1 - t0}") # Time required: 0.1284644603729248

## Version 2
def is_prime_v2(num):
    """ Return 'True' if 'n' is a prime number. False otherwise. """
    if num == 1:
        return False # 1 is not a prime number!

    # If it's even and not 2, then it's not prime
    if num == 2:
        return True
    if num > 2 and num % 2 == 0:
        return False

    for d in range(3, int(math.sqrt(num) + 1), 2):
        if num % d == 0:
            return False
    return True

t0 = time.time()
for n in range(1, user_num + 1):
    if is_prime_v2(n):
        prime_set.add(n)
print(prime_set)
print(sorted(prime_set))

t1 = time.time()
print(f"Time required: {t1 - t0}") # Time required: 0.07941150665283203