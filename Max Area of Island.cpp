//Max Area of Island : LEETCODE-695

//T.C : O(r*c) 
//S.C : O(1)

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        for (int r = 0; r < grid.size(); r++) {
            for (int c = 0; c < grid[0].size(); c++) {
                if (grid[r][c] == 1) {
                    maxArea = max(maxArea, areaOfIsland(grid, r, c));
                }
            }
        }
        return maxArea;
    }
private:
    int areaOfIsland(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size()) return 0;
        if (grid[r][c] == 0) return 0;
        
        // Set value to zero for the point which is passed to reduce execution times
        grid[r][c] = 0;
        
        int area = 1;
        area += areaOfIsland(grid, r+1, c);
        area += areaOfIsland(grid, r-1, c);
        area += areaOfIsland(grid, r, c+1);
        area += areaOfIsland(grid, r, c-1);
        
        return area;
    }
};