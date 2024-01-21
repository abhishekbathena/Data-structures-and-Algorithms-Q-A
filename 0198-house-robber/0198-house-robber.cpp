class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        else if(n==1) return nums[0];
        else if(n==2) return max(nums[0],nums[1]);
        else
        {
            vector<int>dp(n,0);
            int sum2=nums[0];
            int sum1=max(nums[0],nums[1]);
            for(int i=2;i<n;i++)
            {
                int temp=sum1;
                sum1=max(sum1,sum2+nums[i]);
                sum2=temp;
            }
            
            return sum1;
        }
    }
};