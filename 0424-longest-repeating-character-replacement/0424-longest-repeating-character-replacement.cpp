class Solution {
public:
     int characterReplacement(string s, int k) {
        unordered_map<char, int> alp;
        int ans = 0;
        int left = 0;
        int right = 0;
        int maxf = 0;

        for (right = 0; right < s.size(); right++) {
            alp[s[right]] = 1 + alp[s[right]];
            maxf = max(maxf, alp[s[right]]);

            if ((right - left + 1) - maxf > k) {
                alp[s[left]] -= 1;
                left++;
            } else {
                ans = max(ans, (right - left + 1));
            }
        }

        return ans;
    }
};



