class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>m;
        map<int,int>mp;
        if(n==1 && trust.size()==0) return 1;
        for(auto a:trust)
        {
            m[a[1]]++; 
            mp[a[0]]++;
        }
        for(auto a:m)
        {
            if(a.second==n-1)
            {
                 if(mp.find(a.first)!=mp.end()) return -1;
                  return a.first;
            }
        }
      
        
        return -1;
    }
};