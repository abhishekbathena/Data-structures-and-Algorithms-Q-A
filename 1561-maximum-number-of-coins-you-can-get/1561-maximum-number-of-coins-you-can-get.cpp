class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int i1=0,i2=piles.size()-1;
        int ans=0;
        while(i1<i2)
        {
            ans+=piles[i2-1];
            i2=i2-2;
            i1++;
        }
        return ans;
        
    }
};