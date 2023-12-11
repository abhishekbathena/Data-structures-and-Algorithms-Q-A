class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mp;
        for(auto a:arr) mp[a]++;
        
        int n=arr.size();
        int c=n/1/4;
        for(auto b:mp)
        {
            if(b.second>c) return b.first;
        }
        
       return 0; 
    }
};