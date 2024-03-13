class Solution {
public:
    int bulbSwitch(int n) {
        unordered_map<int,int>mp;
        
        return sqrt(n);
        int i=2;
        while(i<=n)
        {
            int j=1,track=i;
            while(j<=n && track<=n)
            {
                mp[i*j]++;
                j++;
                track=i*j;
            }
            i++;
        }
        if(n==0) return 0;
        
        int c=0;
        for(auto a:mp)
        {
            if(a.second%2==0) c++;
        }
        
        return c+1;
    }
};