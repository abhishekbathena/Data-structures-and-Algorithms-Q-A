class Solution {
public:
    
    bool sortByValue(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<int,int>>pairs(mp.begin(),mp.end());
       sort(pairs.begin(), pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });
        
        int i=0;
        for(auto pair:pairs)
        {
            if(pair.second<=k)
            {
                k=k-pair.second;
                i++;
            }
            else
            {
                break;
            }
        }
        
        return pairs.size()-i;
    }
};