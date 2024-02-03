class Solution {
public:

    int solve(vector<int>& arr, int i , int j , int kk,vector<vector<int> > &dp){
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        if(i > j){
            return 0;
        }
        if(i == j){
            return arr[i];
        }
        if(j - i + 1 == kk){
            int maxi = 0;
            for(int x = i ; x<=j ; x++){
                maxi = max(maxi,arr[x]);
            }
            return (j-i+1) * maxi;
        }
        if(j - i + 1 < kk){
            int maxi = 0;
            for(int x = i ; x<=j ; x++){
                maxi = max(maxi,arr[x]);
            }
            return (j-i+1) * maxi;
        }

        int ans = 0;

        for(int k = i ; k < i+kk && k < j; k++){
            ans = max(ans,solve(arr,i,k,kk,dp) + solve(arr,k+1,j,kk,dp));
        }   

        dp[i][j] = ans;
        return ans;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int maxi=0;
        int i=0,j=n-1;
        
        
    return solve(arr,i,j,k,dp);
    }
};

