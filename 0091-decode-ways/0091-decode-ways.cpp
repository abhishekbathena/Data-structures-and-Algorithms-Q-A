#include <iostream>
#include <vector>

class Solution {
public:
    int helper(string& s, int ind, vector<int>& dp) {
        if (ind == s.size()) {
            return 1;
        }

        if (s[ind] == '0') {
            return 0;
        }

        if (dp[ind] != -1) {
            return dp[ind];
        }

        int ways = helper(s, ind + 1, dp);

        if (ind + 1 < s.size() && stoi(s.substr(ind, 2)) <= 26) {
            ways += helper(s, ind + 2, dp);
        }

        dp[ind] = ways;
        return ways;
    }

    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return helper(s, 0, dp);
    }
};
