//Jump Game -II : LEETCODE-45

//T.C : O(n^2) 
//S.C : O(1)

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int reachable = 0,c=0,l=0,r=0;
        while(r<n-1){
            for(int i=l;i<r+1;++i)
        {
                reachable = max(reachable,i+nums[i]);
        }
            l=r+1;
            r=reachable;
            c+=1;
        }
        
        return c;   
    }
};