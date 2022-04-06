//Decode Ways - LEETCODE91
//T.C : O(n)
//S.C : O(1)

class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0' or s.length()<1) return 0;
        if(s.length()==1) return 1;
            int count1=1,count2=1;
        for(int i=1;i<s.length();i++){
            int d =s[i]-'0';
            int dd=(s[i-1]-'0')*10 + d;
            int count=0;
            if(d>0) count+=count2;
            if(dd>=10 and dd<=26) count+=count1;
            count1=count2;
            count2=count;
        }
        return count2;
    }
};
