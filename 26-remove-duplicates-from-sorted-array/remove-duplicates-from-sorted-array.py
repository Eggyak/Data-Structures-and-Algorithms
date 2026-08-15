class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
                
        lst = sorted(set(nums))  
        nums[0:len(lst)] = lst 
        return len(lst)
        
