class Solution {
public:
    int maxScore(string s) {
        int n=s.size(),j=1;
        int maxi=INT_MIN;
        while(j<n)
        {
            int ones=0,zeros=0;
            for(int i=0;i<j;i++)
            {
               if(s[i]=='0') zeros++; 
            }
            for(int i=j;i<n;i++)
            {
               if(s[i]=='1') ones++; 
            }
            maxi=max(maxi,ones+zeros);
            j++;
        }
        return maxi;
    }
};