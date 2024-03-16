class Solution {
public:
int findMaxLength(vector<int>& nums) {
    unordered_map<int, int> count;
    int maxLength = 0;
    int sum = 0;

    count[0] = -1;

    for (int i = 0; i < nums.size(); ++i) {
        sum += (nums[i] == 1) ? 1 : -1;

        if (count.find(sum) != count.end()) {
            maxLength = max(maxLength, i - count[sum]);
        } else {
            count[sum] = i;
        }
    }

    return maxLength;
}
};