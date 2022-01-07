//Hpuse Robber- LEETCODE 198
//T.C - O(N)
//S.C - O(N)

class Solution
{
public:
  int rob (vector < int >&nums)
  {
    int n = nums.size ();
      vector < int >dp (n, 0);
      dp[0] = nums[0];
    if (n == 1)
      {
	return dp[0];
      }
    dp[1] = max (nums[1] + 0, dp[0]);
    for (int i = 2; i < n; i++)
      {
	dp[i] = max (nums[i] + dp[i - 2], dp[i - 1]);
      }
    return dp[n - 1];
  }
};
