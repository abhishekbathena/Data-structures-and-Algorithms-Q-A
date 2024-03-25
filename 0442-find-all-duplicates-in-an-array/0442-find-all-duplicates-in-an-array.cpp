class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;

        unordered_map<int,int>mp;
        for(auto a:nums)
        {
            mp[a]++;
            if(mp[a]>1)
            {
                if(find(ans.begin(),ans.end(),a)==ans.end()) ans.push_back(a);
            }
        }
        
        return ans;
    }
};