class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto a:nums)
        {
            m[a]++;
        }
        for(auto mp:m)
        {
            if(mp.second==1) return -1;
            else if(mp.second%3==0) ans+=mp.second/3;
            else if(mp.second%3==1 && mp.second>3)
            {
                ans+=(mp.second/3)+1;
            }
            else
            {
                int rem=mp.second%3;
                if(rem%2==0) 
                {
                ans++;
                ans+=mp.second/3;
                }
                else ans+=mp.second/2;
            }
        }
        return ans;
    }
};