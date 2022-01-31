//Longest Valid Parentheses - LEETCODE 32

//T.C - O(n)
//S.C - O(n)

class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size()==0){
            return 0;
        }
        vector<int> dp(s.size(),0);
        for(int i=1;i<s.size();i++){
            if(s[i]=='('){
                dp[i]=0;
                continue;
            }
            if(s[i]==')'){
                if(i<1){
                    continue;
                }                
                if(s[i-1]=='('){
                    dp[i]=(i>=2?dp[i-2]:0)+2;continue;
                }
                if(i-dp[i-1]-1<0){
                    continue;
                }
                if(s[i-dp[i-1]-1]=='('){
                    dp[i]=(i-dp[i-1]>=2?dp[i-dp[i-1]-2]:0)+dp[i-1]+2;continue;
                }
            }
        }
        return *max_element(dp.begin(),dp.end());
    }
};