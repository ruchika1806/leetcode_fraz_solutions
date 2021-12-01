//Product of Array Except Self : LEETCODE-238

//T.C : O(n)
//S.C : O(1)


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size();
        int product=1;
        vector<int> ans(n,0);
        int zero_count=0,zero;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zero_count++;
                zero=i;
            }
        }
        if(zero_count>1){
            return ans;
        }
        if(zero_count==1){
            for(int i=0;i<n;i++){
                if(i==zero){
                    continue;
                }
               else{
                   product*=a[i];
               }
            }
            
            ans[zero]=product;
            return ans;
        }
        
        for(int i=0;i<n;i++){
            product*=a[i];
        }
        for(int i=0;i<n;i++){
            ans[i]=product/a[i];
        }
        return ans;
    }
};