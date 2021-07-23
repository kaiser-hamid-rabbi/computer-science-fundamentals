# lambda is a small function that has no name! it's one time use small functions
answer = lambda x: x ** 5
print(answer(5))

# with multiple parameters
answer = lambda x, y: (x * 5) + (y * 10)
print(answer(5, 7))