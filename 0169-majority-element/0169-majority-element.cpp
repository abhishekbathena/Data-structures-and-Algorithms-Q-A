class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi=0,ans=0;
        for(auto a:nums)
        {
            mp[a]++;
            if(mp[a]>maxi)
            {
            maxi=mp[a];
            ans=a;
            }
        }
        return ans;
    }
};