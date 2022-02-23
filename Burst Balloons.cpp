//LEETCODE 312 - BURST BALLOONS
//T.C : O(N^3)
//S.C : O(N*N)

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> T( n , vector<int> (n));

        for (int len = 1; len <= nums.size(); len++) {
            for (int i = 0; i <= nums.size() - len; i++) {
                int j = i + len - 1;
                for (int k = i; k <= j; k++) {
                    //leftValue/rightValue is initially 1. If there is element on
                    // left/right of k then left/right value will take that value.
                    int leftValue = 1;
                    int rightValue = 1;
                    if (i != 0) {
                        leftValue = nums[i-1];
                    }
                    if (j != nums.size() -1) {
                        rightValue = nums[j+1];
                    }

                    //before is initially 0. If k is i then before will
                    //stay 0 otherwise it gets value T[i][k-1]
                    //after is similarly 0 initially. if k is j then after will
                    //stay 0 other will get value T[k+1][j]
                    int before = 0;
                    int after = 0;
                    if (i != k) {
                        before = T[i][k-1];
                    }
                    if (j != k) {
                        after = T[k+1][j];
                    }
                    T[i][j] = max((leftValue * nums[k] * rightValue) + before + after,
                            T[i][j]);
                }
            }
        }
        return T[0][nums.size() - 1];
    }
};
