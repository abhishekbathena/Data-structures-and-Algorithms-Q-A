class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>um;
        for(auto a:arr) um[a]++;
        int k=um.size();
        set<int>s;
        for(auto mp:um)
        {
           s.insert(mp.second); 
        }
        if(s.size()==k) return true;
        return false;
        
    }
};