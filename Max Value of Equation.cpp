// Max Value of Equation : LEETCODE-1499

//T.C : O(n) 
//S.C : O(1)

class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> p;
        int ans=INT_MIN;
        for(int i=0;i<points.size();i++){
            while((!p.empty()) and (points[i][0]-p.top().second>k))p.pop();
            if(!p.empty()){
                ans=max(ans,points[i][0]+points[i][1]+p.top().first);
            }
            p.push({points[i][1]-points[i][0],points[i][0]});
        }
        return ans;
    }
};