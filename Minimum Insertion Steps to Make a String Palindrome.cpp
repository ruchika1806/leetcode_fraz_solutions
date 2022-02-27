//LEETCODE -Minimum Insertion Steps to Make a String Palindrome 1312
//T.C : O(n^2)
//S.C : O(n^2)

class Solution {
public:
    int minInsertions(string s) {
        int n = s.length(),j=-1;
        
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int g = 0 ; g < n ; g++){
            
            for(int i = 0 ; i+g < n ; i++){
                j=i+g;
                if(g == 0)
                    dp[i][j] = 0 ;
                else if(g == 1)
                    dp[i][j] = s[i] == s[j] ? 0 : 1;
                else{
                    
                    if(s[i] == s[j])
                        
                        dp[i][j] = dp[i+1][j-1];
                    
                    else
                    
                        dp[i][j] = 1 + min(dp[i][j-1],dp[i+1][j]);
                    
                }
                
            }
            
        }
        
        return dp[0][n-1];
    }
};
