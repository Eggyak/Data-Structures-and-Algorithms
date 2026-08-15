class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
                
        unique_sorted = sorted(set(nums))  
        nums[0:len(unique_sorted)] = unique_sorted  
        return len(unique_sorted)
        