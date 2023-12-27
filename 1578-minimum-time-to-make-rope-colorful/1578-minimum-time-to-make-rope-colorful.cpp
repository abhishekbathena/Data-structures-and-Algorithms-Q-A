class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
            int maxi=0,res=0,n=neededTime.size();
        for(int i=0;i<n;i++){
            if(i>0 && colors[i]==colors[i-1])
            {
                res+=min(maxi,neededTime[i]);
                maxi=max(maxi,neededTime[i]);
            }
            else
            {
                maxi=neededTime[i];
            }
        }
        return res;
    }
};