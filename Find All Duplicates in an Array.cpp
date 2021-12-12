//Find All Duplicates in an Array : LEETCODE-442

//T.C : O(r*c) 
//S.C : O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);sort(a.begin(),a.end());
        int i=0;
        int n=a.size();
        vector<int> ans;
        while(i<n-1){
            if(a[i+1]==a[i]){
                ans.push_back(a[i]);
                i+=2;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};


//With index

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int nums_size=nums.size();
        vector<int>ans;
        if(nums_size==1)return ans;
        
        for(int i=0;i<nums_size;i++){
            
            if(nums[abs(nums[i])-1]>0) nums[abs(nums[i])-1]*=-1;
            else ans.push_back(abs(nums[i]));
        }
        return ans;
    }
};