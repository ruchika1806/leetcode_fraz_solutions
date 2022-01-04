/******************************************************************************
Maximum Product Subarray - LEETCODE 152
T.C : O(n)
S.C : O(1)
*******************************************************************************/

class Solution {
public:
    int maxProduct(vector<int>& a) {
        int minVal=a[0],maxVal=a[0],prod=a[0];
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i]<0)
                swap(minVal,maxVal);
                
            maxVal=max(a[i],maxVal*a[i]);
            minVal=min(a[i],minVal*a[i]);
            
            prod=max(prod,maxVal);
        }
        
        return prod;
    }
};