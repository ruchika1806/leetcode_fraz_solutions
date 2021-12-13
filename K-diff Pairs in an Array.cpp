//K-diff Pairs in an Array : LEETCODE-532

//T.C : O(nlogn) 
//S.C : O(1)

class Solution {
public:
    bool searchValue(vector<int>& nums, int left, int right, int val) {
        if (left > right) {
            return false;
        }
        
        int mid = (left + right) / 2;
        if (nums[mid] > val) {
            return searchValue(nums, left, mid - 1, val);
        }
        else if (nums[mid] < val) {
            return searchValue(nums, mid + 1, right, val);
        }
        else {
            return true;
        }
    }
    
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int ret = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
            if (searchValue(nums, i + 1, nums.size() - 1, nums[i] + k)) {
                ++ret;
            }
        }
        
        return ret;
    }
};