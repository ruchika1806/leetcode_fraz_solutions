// First Missing Positive : LEETCODE-41

//T.C : O(n) 
//S.C : O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i=0,c1=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1){
                c1++;
            }
        }
        if(c1==0){
            return 1;
        }
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]>0 and nums[i+1]>nums[i]+1){
                return nums[i]+1;
            }
        }        
        if(nums[i]>=0){
            return nums[i]+1;
        }
        
        return 1;
    }
    
    Solution(){        
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  }
};