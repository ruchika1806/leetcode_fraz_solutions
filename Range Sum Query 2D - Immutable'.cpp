//Range Sum Query 2D - Immutable - LEETCODE 304

//T.C - O(m*n)
//S.C - O(m*n)

class NumMatrix {
public:
    int n,m;
    int dp[200][200];
    NumMatrix(vector<vector<int>>& matrix) {
        n= matrix.size();
        m= matrix[0].size();        
        int prev=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    prev=0;
                }
                dp[i][j]=matrix[i][j]+prev;
                prev=dp[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=0,left_limit;
        for(int i=row1;i<=row2;i++){
            if(col1==0){
                left_limit=0;
            }
            else{
                left_limit=dp[i][col1-1];
            }
            ans+=dp[i][col2]-left_limit;
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */