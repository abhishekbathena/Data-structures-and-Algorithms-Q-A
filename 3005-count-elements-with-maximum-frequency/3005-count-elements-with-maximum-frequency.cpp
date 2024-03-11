class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>ans;
        int maxi=0;
        for(auto a:nums)
        {
            ans[a]++;
            maxi=max(maxi,ans[a]);
        }
        
        int asum=0;
        
        for(auto b:ans)
        {
            if(b.second==maxi) asum+=b.second;
        }
        
        return asum;
    }
};