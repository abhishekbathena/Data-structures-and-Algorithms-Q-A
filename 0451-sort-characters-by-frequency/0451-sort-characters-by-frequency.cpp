class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto a:s)
        {
           mp[a]++;
        }
        
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second < b.second;
        });
        string ans="";
        for(auto a:vec)
        {
            for(int i=0;i<a.second;i++)
            {
                ans+=a.first;
            }
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};