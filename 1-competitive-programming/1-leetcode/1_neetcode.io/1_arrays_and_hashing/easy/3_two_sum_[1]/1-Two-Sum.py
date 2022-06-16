# Solution 1:
# -------------------------------------------------------------------
# from typing import List

# class Solution:
#    def twoSum(self, nums: List[int], target: int) -> List[int]:
#        seen = {}
#        for i, value in enumerate(nums):
#            remaining = target - nums[i]
           
#            if remaining in seen:
#                return [i, seen[remaining]]
            
#            seen[value] = i

# nums = [2,7,11,15] 
# target = 9
# sol = Solution()
# results = sol.twoSum(nums=nums, target=target)
# print(results)



# Solution 2:
# -------------------------------------------------------------------
# class Solution:
# 	def twoSum(self, nums, target):
#             Hashmap = {}
#             for index, value in enumerate(nums):
#                 key = target - value
#                 if key in Hashmap:
#                     return [Hashmap[key], index]
#                 else:
#                     Hashmap[value] = index
				

# nums = [2,11,7,15] 
# target = 9
# sol = Solution()
# results = sol.twoSum(nums=nums, target=target)
# print(results)



# Solution 3: Using HashMap
# -------------------------------------------------------------------
from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prevMap = {} # val : index

        for i, n in enumerate(nums):
            diff = target - n
            if diff in prevMap:
                return [prevMap[diff], i]
            prevMap[n] = i
        return

nums = [2,11,7,15]
# nums = [2,1,5,3]
target = 9
# target = 4
sol = Solution()
results = sol.twoSum(nums=nums, target=target)
print(results)    