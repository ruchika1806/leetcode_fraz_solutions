//Maximum Points You Can Obtain from Cards : LEETCODE-1423

//T.C : O(n) 
//S.C : O(1)

class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int window=0,i,sum=0,ans=0,n=card.size();
        for(i=0;window<n-k;i++,window++){
            sum+=card[i];
        }
        int window_sum=accumulate(card.begin(),card.end(),0);
        
        ans=max(ans,window_sum-sum);
        int j=0;
        while(i<card.size()){
            sum-=card[j++];
            sum+=card[i++];
        }
        ans=max(ans,window_sum-sum);
        return ans;
    }
};