class Solution {
public:
    
    int helper(int n,int i,vector<int>&dp)
    {
        if(i>n) return 0;
        if(dp[i]!=-1) return dp[i];
        if(i==n) return 1;
        int onestep=helper(n,i+1,dp);
        int twostep=helper(n,i+2,dp);
        
        return dp[i]=onestep+twostep;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,0,dp);
    }
};