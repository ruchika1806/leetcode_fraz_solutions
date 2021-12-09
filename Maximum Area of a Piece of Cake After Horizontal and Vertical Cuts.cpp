//Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts : LEETCODE-1465

//T.C : O(n) 
//S.C : O(1)

class Solution {
public:
    int maxArea(int h, int v, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        int n=hc.size();
        int m=vc.size();
        int max_l=max(hc[0],h-hc[n-1]);
        int max_b=max(vc[0],v-vc[m-1]);
        for(int i=1;i<n;i++){
            max_l=max(max_l,hc[i]-hc[i-1]);
        }
         for(int j=1;j<m;j++){
            max_b=max(max_b,vc[j]-vc[j-1]);
        }
        
        return (long)max_l*max_b %1000000007;
    }
};