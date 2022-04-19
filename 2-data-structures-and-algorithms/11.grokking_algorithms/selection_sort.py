"""

Selection Sort algorithm is a neat algorithm, but not very
fast. Running time: O(n^2).

"""
def findSmallest(arr):
    smallest = arr[0]
    smallest_index = 0
    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index

def selectionSort(arr):
    newArr = []
    for i in range(len(arr)):
        smallest_index = findSmallest(arr)
        newArr.append(arr.pop(smallest_index))
    return newArr

input = [5, 3, 6, 9, 7]

print(f"Input: {input}")
print(f"Output: {selectionSort(input)}")