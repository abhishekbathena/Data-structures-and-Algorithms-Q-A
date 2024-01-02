class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
        }
        vector<pair<int, int>> umVector(um.begin(), um.end());
        sort(umVector.begin(), umVector.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        vector<vector<int>>ans(umVector[0].second);
        for(auto a:umVector)
        {
            vector<int>temp;
            for(int i=0;i<a.second;i++)
            {
               ans[i].push_back(a.first); 
            }
            
        }
        
        return ans;

        
    }
};