class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp,np;
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                return {mp[target-nums[i]],i};
            }
            
            mp[nums[i]]=i;
            
        }
        
        return {0,0};
        
    }
};