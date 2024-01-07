class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size(); 
        int ans = 0;
        unordered_map <long, int> mapping[n];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < i; ++j){
                long difference = (long)nums[i] - nums[j];
                auto it = mapping[j].find(difference);
                int count_j = it == end(mapping[j]) ? 0 : it->second;
                mapping[i][difference] += count_j + 1;
                ans += count_j;
            }
        }
        return ans;
        
    }
};