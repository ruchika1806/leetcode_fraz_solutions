// Maximum Subarray : LEETCODE-53

//T.C : O(n) 
//S.C : O(1)


//Python
class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans=nums[0]
        for i in range (1,len(nums)):
            nums[i]=max(nums[i],nums[i-1]+nums[i])
            ans=max(ans,nums[i])
        
        return ans

