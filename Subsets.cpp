//Subsets : LEETCODE-78

//T.C : O(2^n) 
//S.C : O(2^n)

class Solution {
public:
    void help(int i, vector<int>& nums, vector<int>& temp,vector<vector<int>> &res){
        if(i==nums.size()){
            res.push_back(temp);
            return;
        }
        else{
            temp.push_back(nums[i]);
            help(i+1,nums,temp,res);
            temp.pop_back();
            help(i+1,nums,temp,res);
        }      
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        help(0,nums,temp,res);
        return res;
    }
};