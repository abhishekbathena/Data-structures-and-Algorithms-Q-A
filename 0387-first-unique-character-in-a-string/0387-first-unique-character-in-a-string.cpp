class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>mp(128,0);
        for(auto a:s)
        {
            mp[a]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1) return i; 
        }
        
        return -1;
    }
};