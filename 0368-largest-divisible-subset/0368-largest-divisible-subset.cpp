class Solution {
public:
    
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>gs(n,1);
        vector<int>prevele(n,-1);
        int maxind=0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 && gs[i]<gs[j]+1)
                {
                    gs[i]=gs[j]+1;
                    prevele[i]=j;
                }
            }
            if(gs[i]>gs[maxind])
            {
                maxind=i;
            }
        }

        while(maxind!=-1)
        {
            ans.push_back(nums[maxind]);
            maxind=prevele[maxind];
        }
        
        return ans;
        
        
        
        
        
    }
};