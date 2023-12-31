class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].push_back(i);
        }
        
        int maxi=-1;
        for(auto a:mp)
        {
            int size=a.second.size()-1;
            if(a.second.size()>=2)
            {
                 maxi=max(maxi,abs(a.second[0]-a.second[size])-1);
            }
           
        }
        return maxi;
    }
};