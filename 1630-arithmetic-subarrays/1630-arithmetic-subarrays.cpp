#include <vector>
#include <algorithm>

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for (int i = 0; i < l.size(); i++) {
            vector<int> in;
            for (int j = l[i]; j <= r[i]; j++) {
                in.push_back(nums[j]);
            }
            sort(in.begin(), in.end());
            if (in.size() < 2) {
                ans.push_back(false);
                continue;
            }
            int dif = in[1] - in[0];
            bool isArithmetic = true;
            for (int k = 2; k < in.size(); k++) {
                if (in[k] - in[k - 1] != dif) {
                    isArithmetic = false;
                    break;
                }
            }
            ans.push_back(isArithmetic);
        }
        return ans;
    }
};
