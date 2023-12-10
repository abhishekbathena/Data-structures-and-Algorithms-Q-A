class Solution {
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>>ans={};
        vector<int>v;
        subset(1,n,v,ans,k);
        return ans;
    }
    void subset(int start,int n,vector<int>&v,vector<vector<int>>&ans,int k)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
            return;
        }
        for( int i=start;i<=n;i++)
        {
            v.push_back(i);
            subset(i+1,n,v,ans,k);
            v.pop_back();
        }
    }
};