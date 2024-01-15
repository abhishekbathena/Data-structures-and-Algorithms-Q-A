class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>w;
        unordered_map<int,int>l;
        unordered_map<int,int>count;
       
        for(auto a:matches)
        {
            w[a[0]]++;
            l[a[1]]++;
            count[a[0]]++;
            count[a[1]]++;
        }
        vector<vector<int>>ans;
        vector<int>won,los;
        for(auto a:count)
        {
          if(a.second==w[a.first]) won.push_back(a.first);
          if(l[a.first]==1) los.push_back(a.first);
        }
        sort(won.begin(),won.end());
        sort(los.begin(),los.end());
        ans.push_back(won);
        ans.push_back(los);
        
        return ans;
     
    }
};