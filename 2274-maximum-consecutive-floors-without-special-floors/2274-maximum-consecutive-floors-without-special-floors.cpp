class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        
        sort(special.begin(),special.end());
        int spdiff=INT_MIN;
        for(int i=1;i<special.size();i++) spdiff=max(spdiff,special[i]-special[i-1]);
        if(special.size()<2) spdiff=INT_MIN;
        else spdiff=spdiff-1;
        int start=abs(bottom-special[0]);
        int end=top-special[special.size()-1];
        int maxi=max(start,end);
        spdiff=max(spdiff,maxi);
        return spdiff;
        
    }
};