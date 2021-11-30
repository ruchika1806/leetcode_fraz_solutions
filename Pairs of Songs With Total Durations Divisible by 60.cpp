//Pairs of Songs With Total Durations Divisible by 60 : LEETCODE-1010

//T.C : O(n)
//S.C : O(1)


class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> rem(60);
        for(int ele: time){
            rem[ele%60]+=1;
        }
        int count=0;
        count+=((rem[0]-1)*rem[0])/2;
        count+=((rem[30]-1)*rem[30])/2;
        for(int i=1;i<=29;++i){
            count+=rem[60-i]*rem[i];
        }
        return count;
    }
};