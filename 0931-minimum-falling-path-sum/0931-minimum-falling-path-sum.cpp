class Solution {
public:
int minFallingPathSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Create a DP table to store the minimum falling path sum for each position
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Initialize the DP table with the values of the last row
    for (int col = 0; col < n; ++col) {
        dp[n - 1][col] = matrix[n - 1][col];
    }

    // Build the DP table bottom-up
    for (int row = n - 2; row >= 0; --row) {
        for (int col = 0; col < n; ++col) {
            int left = (col > 0) ? dp[row + 1][col - 1] : INT_MAX;
            int middle = dp[row + 1][col];
            int right = (col < n - 1) ? dp[row + 1][col + 1] : INT_MAX;

            dp[row][col] = matrix[row][col] + min(left, min(middle, right));
        }
    }

    // Find the minimum falling path sum from the first row
    int result = INT_MAX;
    for (int col = 0; col < n; ++col) {
        result = min(result, dp[0][col]);
    }

    return result;
}
};