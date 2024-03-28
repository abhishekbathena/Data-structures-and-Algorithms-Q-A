class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int n=nums.size();
        int start=0,ans=INT_MIN,count=0;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
            while(freq[nums[i]]>k)
            {
                    freq[nums[start]]--;
                    if(freq[nums[i]]==0) freq.erase(nums[start]);
                    start++;
            }
            count=i-start+1;
            ans=max(ans,count);
        }
        return ans;
    }
};