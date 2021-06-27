# # Prime number Version 1
#
# import time
#
# def is_pring_v1(n):
#     """ Return 'True' if 'n' is a prime number. False otherwise. """
#     if n == 1:
#         return False # 1 is not prime!
#
#     for d in range(2, n):
#         if n % d == 0:
#             return False
#     return True
#
# # ======== Test Function ==========
# # for n in range(1, 21):
# #     print(n, is_pring_v1(n))
#
# t0 = time.time()
# for n in range(1, 100000):
#     is_pring_v1(n)
# t1 = time.time()
# print(f"Time required: {t1 - t0}") # Time required: 19.467581033706665


# # Prime number Version 2
#
# import time
# import math
#
# def is_pring_v2(n):
#     """ Return 'True' if 'n' is a prime number. False otherwise. """
#     if n == 1:
#         return False # 1 is not prime!
#
#     max_divisor = math.floor(math.sqrt(n))
#     for d in range(2, 1 + max_divisor):
#         if n % d == 0:
#             return False
#     return True
#
# # ======== Test Function ==========
# # for n in range(1, 21):
# #     print(n, is_pring_v2(n))
#
# t0 = time.time()
# for n in range(1, 100000):
#     is_pring_v2(n)
# t1 = time.time()
# print(f"Time required: {t1 - t0}") # Time required: 0.12478470802307129


# Prime number Version 3

import time
import math

def is_pring_v3(n):
    """ Return 'True' if 'n' is a prime number. False otherwise. """
    if n == 1:
        return False # 1 is not prime!

    # If it's even and not 2, then it's not prime
    if n == 2:
        return True
    if n > 2 and n % 2 == 0:
        return False

    max_divisor = math.floor(math.sqrt(n))
    for d in range(3, 1 + max_divisor, 2):
        if n % d == 0:
            return False
    return True

# ======== Test Function ==========
# for n in range(1, 21):
#     print(n, is_pring_v3(n))

t0 = time.time()
for n in range(1, 100000):
    is_pring_v3(n)
t1 = time.time()
print(f"Time required: {t1 - t0}") # Time required: 0.07326269149780273