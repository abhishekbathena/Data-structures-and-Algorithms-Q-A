class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
        {
            p.push_back({efficiency[i],speed[i]});
        }
        sort(p.begin(),p.end());
        
        priority_queue<int,vector<int>,greater<int>>pq;
           long long s = 0, mod = 1e9 + 7, ans = 0;
        for(int i=n-1;i>=0;i--)
        {
            s+=p[i].second;
            pq.push(p[i].second);
            if(pq.size()>k)
            {
                s-=pq.top();
                pq.pop();
            }
            ans=max(ans,p[i].first*s);
            
        }
        
       
        
        return ans%mod;
    }
};