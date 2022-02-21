//FROG JUMP -LEETCODE 403
//T.C : O(n^2)
//S.C : O(n^2)

class Solution {
public:
    bool canCross(vector<int>& stones) {
        int  n = stones.size();
        
        if(!n)
            return true;
        
        unordered_map<int,set<int>> dp;
        
        for(auto stone : stones){
            dp[stone] = set<int>();
        }
        
        dp[0].insert(1);
        
        for(int i = 0; i < n; i++){
            int curStone=stones[i];
            set<int> jumps = dp[curStone];
                for(auto jump : jumps){
                    int pos = curStone+jump;
                    if(pos==stones[n-1]){
                        return true;
                    }
                    if(dp.count(pos)){
                        if(jump-1>0){
                            dp[pos].insert(jump-1);
                        }
                        dp[pos].insert(jump);
                        dp[pos].insert(jump+1);
                    }
                }              
            
        }
        
        return false;
    }
};
