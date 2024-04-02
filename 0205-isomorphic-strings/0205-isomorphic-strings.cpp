class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>sp,tp;
        
        for(auto a:s)
        {
            if(sp.count(a)!=0) continue;
            sp[a]=sp.size();
        }
        for(auto a:t)
        {
            if(tp.count(a)!=0) continue;
            tp[a]=tp.size();
        }
        
        for(int i=0;i<s.size();i++ )
        {
            if(sp[s[i]]!=tp[t[i]]) return false;
        }
        
        return true;
    }
};