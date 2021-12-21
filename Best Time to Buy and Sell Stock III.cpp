// Best Time to Buy and Sell Stock III : LEETCODE-123

//T.C : O(n) 
//S.C : O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1){
            return 0;
        }
        int fb=INT_MIN,sb=INT_MIN,fs=0,ss=0;
        //fb=maximum profit that can be made after all first buys until that index in the loop.
        //fs=maximum profit that can be made after all first sells until that index in the loop.
        //sb=maximum profit that can be made after all second buys until that index in the loop.
        //ss=maximum profit that can be made after all second sells until that index in the loop. i.e final answer
        for(int i=0;i<prices.size();i++){
            fb=max(fb,-prices[i]);
            fs=max(fs,fb+prices[i]);
            sb=max(sb,fs-prices[i]);
            ss=max(ss,sb+prices[i]);
        }
        return ss;
    }
};