//3 sum : LEETCODE-15

//T.C : O(N^3)
//S.C : O(1)


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int a=nums[i];
            int t=-a;
            int s=i+1,e=n-1;
            while(s<e){
                if(nums[s]+nums[e]==t){
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e and nums[s]==nums[s+1]){
                        s++;
                    }
                    while(s<e and nums[e]==nums[e-1]){
                        e--;
                    }
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>t){
                    e--;
                }
                else{
                    s++;
                }
            }
            while(i+1<n and nums[i+1]==nums[i]){
                i++;
            }
            
        }
        return ans;
    }
};