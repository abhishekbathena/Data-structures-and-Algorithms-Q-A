class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int st=-1,mini=-1,maxi=-1;
        int n=size(nums);
        long long ans=0,temp=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<minK || nums[i]>maxK) st=i;
            if(nums[i]==minK) mini=i;
            if(nums[i]==maxK) maxi=i;
            temp=min(mini,maxi)-st;
            ans+=(temp<0)?0:temp;
            
        }
        return ans;
    }
};