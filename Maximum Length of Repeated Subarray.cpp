// Maximum Length of Repeated Subarray - LEETCODE 718
//T.C - O(N*M)
//S.C - O(N*M)

class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int dp[n+1][m+1];
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    dp[i+1][j+1]=1;
                    if(i>0 and j>0){
                        dp[i+1][j+1]+=dp[i][j];
                    }
                }
                else{
                    dp[i+1][j+1]=0;
                }
                ans=max(ans,dp[i+1][j+1]);
            }
        }
        return ans;
    }
};