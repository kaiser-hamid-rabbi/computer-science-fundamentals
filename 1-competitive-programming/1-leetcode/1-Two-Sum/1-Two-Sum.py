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


class Solution:
	def twoSum(self, nums, target):
        Hashmap = {}
        for index, value in enumerate(nums):
            key = target - value
            if key in Hashmap:
                return [Hashmap[key], index]
            else:
                Hashmap[value] = index
				

nums = [2,7,11,15] 
target = 9
sol = Solution()
results = sol.twoSum(nums=nums, target=target)
print(results)