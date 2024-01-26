#include <vector>
using namespace std;

class Solution {
public:
    int helper(int i, int j, int movecount, int m, int n, int maxmove, vector<vector<vector<int>>>& dp) {
        const int MOD = 1e9 + 7;

        if (movecount > maxmove) return 0;
        if (i < 0 || i >= m || j < 0 || j >= n) return 1;
        if (dp[i][j][movecount] != -1) return dp[i][j][movecount];

        long long ans = 0;
        ans += helper(i - 1, j, movecount + 1, m, n, maxmove, dp);
        ans += helper(i + 1, j, movecount + 1, m, n, maxmove, dp);
        ans += helper(i, j - 1, movecount + 1, m, n, maxmove, dp);
        ans += helper(i, j + 1, movecount + 1, m, n, maxmove, dp);

        dp[i][j][movecount] = ans % MOD;
        return dp[i][j][movecount];
    }

    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(maxMove + 1, -1)));
        return helper(startRow, startColumn, 0, m, n, maxMove, dp);
    }
};
