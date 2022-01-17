//Longest Increasing Subarray - LEETCODE 300

//T.C - O(N)
//S.C - O(N)

class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<int> seq;
     seq.push_back(a[0]);
     
     for(int i=0;i<n;i++){
         if(seq.back()<a[i]){
             seq.push_back(a[i]);
         }
         else{
             int ind = lower_bound(seq.begin(),seq.end(),a[i])-seq.end();
             seq[ind]=a[i];
         }
     }
     
     return seq.size();
    }
};