//Counting Bits - LEETCODE-338

//T.C = O(N)
//S.C = O(1)

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans={0};
        int c=0,power=1;
        for(int i=1;i<=n;i++){          
            ans.push_back(ans[i-power]+1);
            c++;
            if(c==power){
                c=0;
                power=i+1;
            }
        }
        return ans;
        
    }
};