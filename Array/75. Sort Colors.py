class Solution(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        low = 0
        mid = 0
        high = len(nums)-1
        while mid<=high:
            if nums[mid] == 0:
                nums[low], nums[mid] = nums[mid], nums[low]
                mid +=1
                low +=1
            elif nums[mid]==1:
                mid +=1
            else:
                nums[high], nums[mid] = nums[mid], nums[high]
                high -=1
            