class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        seen = set(nums)
        if len(nums) != len(seen):
            return True
        return False


        