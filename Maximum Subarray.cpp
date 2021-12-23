// Maximum Subarray : LEETCODE-53

//T.C : O(n) 
//S.C : O(1)


//CPP
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i]=max(nums[i],nums[i]+nums[i-1]);
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};

