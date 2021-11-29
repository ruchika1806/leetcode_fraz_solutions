//3sum closest - LEETCODE-16



class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum,mini=INT_MAX,ans;
        for(int i=0;i<n;i++){
            int a =nums[i];
            int s=i+1,e=n-1;
            while(s<e){
                sum=nums[s]+nums[e]+a;
                if(sum==t){
                    return sum;
                }
                if(abs(t-sum)<mini){
                    ans=sum;
                    mini=abs(t-sum);
                }
               if(sum>t){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return ans;
    }
};