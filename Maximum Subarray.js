// Maximum Subarray : LEETCODE-53

//T.C : O(n) 
//S.C : O(1)


//JavaScript
var maxSubArray = function(nums) {
    let ans=nums[0];
    let n = nums.length;
for (let i = 1; i < n; i++) {
    nums[i]=Math.max(nums[i],nums[i]+nums[i-1]);
    ans=Math.max(ans,nums[i]);
}
    return ans;
};

