import random

# Maximum Pair-wise Product Naive version!
def max_pairwise_product_naive(numbers):
    n = len(numbers)
    max_product = 0
    for first in range(n):
        for second in range(first + 1, n):
            max_product = max(max_product,
                numbers[first] * numbers[second])

    return max_product

# Maximum Pair-wise Product Optimized version!
def max_pairwise_product_opt(numbers):
    index1 = -1
    for i in range(len(numbers)):
        if index1 == -1 or numbers[i] > numbers[index1]:
            index1 = i
    index2 = -1
    for j in range(len(numbers)):
        if j != index1 and (index2 == -1 or numbers[j] > numbers[index2]):
            index2 = j
    return numbers[index1] * numbers[index2]

# Stress Testing for Maximum Pair-wise Product problem
def stress_test(N, M):
    while True:
        n = random.randint(2, N)
        print(f"Number of elements: {n}")
        a = [random.randint(0, M) for i in range(n)]
        print(f"Generated random list: {a}")
        res1 = max_pairwise_product_naive(a)
        res2 = max_pairwise_product_opt(a)
        if res1 == res2:
            print("Test Passed!")
        else:
            print(f"Result mismatch found! \nNaive => {res1} Optimized => {res2}")
            break

N = 100
M = 100

if __name__ == '__main__':

    input_n = int(input("Enter the number of elements: "))
    input_numbers = [int(x) for x in input().split()]
    # print("Maximum Pairwise Product: ", max_pairwise_product_naive(input_numbers))
    print("Maximum Pairwise Product Optimized: ", max_pairwise_product_opt(input_numbers))

    # stress_test(N, M)
