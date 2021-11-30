//GameOfLife : LEETCODE-289

//T.C : O(n*m)
//S.C : O(1)


class Solution {
public:
     bool safe(int x, int y, int n, int m) {
            return (x >= 0 && x < n && y >= 0 && y < m);
        }
    void gameOfLife(vector<vector<int>>& board) {
            int n = board.size();
            int m = board[0].size();

            int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
            int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    int lives = 0;
                    for (int k = 0; k < 8; k++)
                        if (safe(i + dx[k], j + dy[k], n, m) && abs(board[i + dx[k]][j + dy[k]]) == 1)
                            lives++;

                    if (board[i][j] == 0 && lives == 3)
                        board[i][j] = 2;
                    if (board[i][j] == 1 && (lives < 2 || lives > 3))
                        board[i][j] = -1;
                }
            }

            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    board[i][j] = board[i][j] > 0 ? 1 : 0;
    }
};