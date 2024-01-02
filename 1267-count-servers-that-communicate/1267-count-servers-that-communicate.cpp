#include <vector>

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans = 0;
        int rn = grid.size();
        int cm = grid[0].size();
        
        // Count the number of servers in each row and column
        vector<int> rowSum(rn, 0);
        vector<int> colSum(cm, 0);
        
        for (int i = 0; i < rn; i++) {
            for (int j = 0; j < cm; j++) {
                if (grid[i][j] == 1) {
                    rowSum[i]++;
                    colSum[j]++;
                }
            }
        }
        
        // Check for communication and update the count
        for (int i = 0; i < rn; i++) {
            for (int j = 0; j < cm; j++) {
                if (grid[i][j] == 1 && (rowSum[i] > 1 || colSum[j] > 1)) {
                    ans++;
                }
            }
        }

        return ans;
    }
};
