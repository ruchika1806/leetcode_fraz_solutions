//Continuous Subarray Sum - LEETCODE 523
//T.C - O(N)
//S.C - O(N)

static int noio = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map.reserve(nums.size()+1);
        map.insert(pair<int, int>(0,-1));;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (k != 0) {
                sum = sum % k;
            }

            if (map.count(sum)) {
                if (i - map[sum] >= 2) return true;
            } else map.insert(pair<int, int>(sum, i));;
         }

         return false;
    }
};