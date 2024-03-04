class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int i = 0, j = tokens.size() - 1;
        int maxi = 0;
        int score = 0;
        while (i <= j) { // Changed condition to handle the case when i and j meet
            if (power >= tokens[i]) {
                score++;
                power -= tokens[i];
                maxi = max(maxi, score);
                i++;
            } else if (score > 0) { // Added condition to ensure we have at least 1 score to play tokens face-down
                score--;
                power += tokens[j];
                maxi = max(maxi, score);
                j--;
            } else {
                break; // If we cannot play any token, break the loop
            }
        }
        return maxi;
    }
};
