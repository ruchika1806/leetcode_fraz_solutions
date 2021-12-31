//Word Break - LEETCODE 139
//T.C - O(N)
//S.C - O(N)

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> us(wordDict.begin(), wordDict.end());
        int n=s.size(), l=0;
        for(auto x: wordDict){
            int t=x.size();
            l=max(l, t);
        }
        vector<bool> dp(n+1, false);
        dp[0]=true;
        for(int i=0; i<=n; i++){
            for(int j=i-1; j>=0; j--){
                if((i-j)>l) continue;
                if(dp[j]){
                    string x=s.substr(j, i-j);
                    if(us.find(x)!=us.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};