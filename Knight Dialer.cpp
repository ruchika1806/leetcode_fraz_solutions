//Knight Dialer - LEETCODE 935


//DP Solution:
//T.C - O(N^2)
//S.C - O(N^2)

class Solution {
public:
    #define FORI(s,n) for(int i = s; i < n; i++)
#define FORJ(s,n) for(int j = s; j < n; j++)

using ll   = long long;
using vll  = vector<long long>;
using vvll = vector<vll>;

const int MOD = 1000000007;

int knightDialer(int N) {
   if (N == 1) return 10;
   vvll dp(N + 1, vll(10, 0));
   FORI(0, 10) dp[1][i] = 1;
   FORI(2, N + 1) {
      dp[i][0] = dp[i - 1][4] + dp[i - 1][6];
      dp[i][1] = dp[i - 1][6] + dp[i - 1][8];
      dp[i][2] = dp[i - 1][7] + dp[i - 1][9];
      dp[i][3] = dp[i - 1][4] + dp[i - 1][8];
      dp[i][4] = dp[i - 1][3] + dp[i - 1][9] + dp[i - 1][0];
      dp[i][6] = dp[i - 1][1] + dp[i - 1][7] + dp[i - 1][0];
      dp[i][7] = dp[i - 1][2] + dp[i - 1][6];
      dp[i][8] = dp[i - 1][1] + dp[i - 1][3];
      dp[i][9] = dp[i - 1][2] + dp[i - 1][4];
      FORJ(0, 10) dp[i][j] %= MOD;
   }
   ll ans = 0;
   FORI(0, 10) ans += dp[N][i] % MOD;
   return ans % MOD;
}
    
};

//Efficient Solution:
//T.C - O(N)
//S.C - O(N)


class Solution {
public:
    int knightDialer(int n) {
        if (n == 1) {
            return 10;
        }

        long A = 1; // 0
        long B = 2; // 4/6
        long C = 4; // 1/3/7/9
        long D = 2; // 2/8
        
        for (int i = 2; i <= n; i++) {
            long old_A = A;
            long old_B = B;
            long old_C = C;
            long old_D = D;
            
            A = old_B;
            B = (old_A * 2 % 1000000007 + old_C) % 1000000007;
            C = (old_B * 2 % 1000000007 + old_D * 2 % 1000000007) % 1000000007;
            D = old_C;
        }
        
        return (int)((A + B + C + D) % 1000000007);
}
    
};
