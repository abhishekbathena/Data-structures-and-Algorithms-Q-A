class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxi=0,ans,i=0;
        for(auto a:grid)
        {
            int c=0;
            
            for(auto b:a)
            {
                if(b==1) c++;
            }
            if(c>maxi) 
            {
                maxi=c;
                ans=i;
            }
            i++;
        }
        return ans;
    }
};