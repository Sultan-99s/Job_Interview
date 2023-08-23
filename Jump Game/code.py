class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        t = len(nums)-1
        for i in range(len(nums)-2, -1, -1):
            if i+nums[i] >= t:
                t = i
        if t == 0:
            return True
        return False
