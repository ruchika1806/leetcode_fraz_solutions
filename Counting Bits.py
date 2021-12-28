class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        dp=[0]
        c=0
        power=1
        for i in range (1,n+1):          
            dp.append(dp[i-power]+1)
            c=c+1
            if(c==power):
                c=0
                power=i+1
            
        
        return dp;