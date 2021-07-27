"""

The Python itertools module is a collection of tools for handling iterators. Simply put, iterators are data types that can be used in a for loop. The most common iterator in Python is the list.

See https://docs.python.org/3/library/itertools.html for all possible itertools

product()
This tool computes the cartesian product of input iterables.
It is equivalent to nested for-loops. For example, product(A, B) returns the same as ((x,y) for x in A for y in B).

from itertools import product

prod = product([1, 2], [3, 4])
print(list(prod)) # note that we convert the iterator to a list for printing

# to allow the product of an iterable with itself, specify the number of repetitions 
prod = product([1, 2], [3], repeat=2)
print(list(prod)) # note that we convert the iterator to a list for printing
    [(1, 3), (1, 4), (2, 3), (2, 4)]
    [(1, 3, 1, 3), (1, 3, 2, 3), (2, 3, 1, 3), (2, 3, 2, 3)]
# permutations()
# This tool returns successive length permutations of elements in an iterable, with all possible orderings, and no repeated elements.

from itertools import permutations

perm = permutations([1, 2, 3])
print(list(perm))

# optional: the length of the permutation tuples
perm = permutations([1, 2, 3], 2)
print(list(perm))
    [(1, 2, 3), (1, 3, 2), (2, 1, 3), (2, 3, 1), (3, 1, 2), (3, 2, 1)]
    [(1, 2), (1, 3), (2, 1), (2, 3), (3, 1), (3, 2)]
# combinations() and combinationswithreplacement()
# r-length tuples, in sorted order. So, if the input iterable is sorted, the combination tuples will be produced in sorted order. combinations() does not allow repeated elements, but combinationswithreplacement() does.

from itertools import combinations, combinations_with_replacement

# the second argument is mandatory and specifies the length of the output tuples.
comb = combinations([1, 2, 3, 4], 2)
print(list(comb))

comb = combinations_with_replacement([1, 2, 3, 4], 2)
print(list(comb))
    [(1, 2), (1, 3), (1, 4), (2, 3), (2, 4), (3, 4)]
    [(1, 1), (1, 2), (1, 3), (1, 4), (2, 2), (2, 3), (2, 4), (3, 3), (3, 4), (4, 4)]
# accumulate()
# Make an iterator that returns accumulated sums, or accumulated results of other binary functions.

from itertools import accumulate

# return accumulated sums
acc = accumulate([1,2,3,4])
print(list(acc))

# other possible functions are possible
import operator
acc = accumulate([1,2,3,4], func=operator.mul)
print(list(acc))

acc = accumulate([1,5,2,6,3,4], func=max)
print(list(acc))
    [1, 3, 6, 10]
    [1, 2, 6, 24]
    [1, 5, 5, 6, 6, 6]
# groupby()
# Make an iterator that returns consecutive keys and groups from the iterable. The key is a function computing a key value for each element. If not specified or is None, key defaults to an identity function and returns the element unchanged. Generally, the iterable needs to already be sorted on the same key function.

from itertools import groupby

# use a function as key
def smaller_than_3(x):
    return x < 3

group_obj = groupby([1, 2, 3, 4], key=smaller_than_3)
for key, group in group_obj:
    print(key, list(group))
    
# or use a lamda expression, e.g. words with an 'i':
group_obj = groupby(["hi", "nice", "hello", "cool"], key=lambda x: "i" in x)
for key, group in group_obj:
    print(key, list(group))
    
persons = [{'name': 'Tim', 'age': 25}, {'name': 'Dan', 'age': 25}, 
           {'name': 'Lisa', 'age': 27}, {'name': 'Claire', 'age': 28}]

for key, group in groupby(persons, key=lambda x: x['age']):
    print(key, list(group))
    True [1, 2]
    False [3, 4]
    True ['hi', 'nice']
    False ['hello', 'cool']
    25 [{'name': 'Tim', 'age': 25}, {'name': 'Dan', 'age': 25}]
    27 [{'name': 'Lisa', 'age': 27}]
    28 [{'name': 'Claire', 'age': 28}]
# Infinite iterators: count(), cycle(), repeat()
from itertools import count, cycle, repeat
# count(x): count from x: x, x+1, x+2, x+3...
for i in count(10):
    print(i)
    if  i >= 13:
        break

# cycle(iterable) : cycle infinitely through an iterable
print("")
sum = 0
for i in cycle([1, 2, 3]):
    print(i)
    sum += i
    if sum >= 12:
        break

# repeat(x): repeat x infinitely or n times
print("")
for i in repeat("A", 3):
    print(i)
    10
    11
    12
    13

    1
    2
    3
    1
    2
    3

    A
    A
    A

"""