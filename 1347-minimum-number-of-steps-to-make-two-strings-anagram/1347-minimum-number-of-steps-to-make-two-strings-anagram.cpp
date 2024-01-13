class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>s1(26,0);
        vector<int>s2(26,0);
        for(auto a:s) s1[a-'a']++;
        for(auto a:t) s2[a-'a']++;
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(s1[i]>s2[i]) count+=s1[i]-s2[i];
        }
        return count;
    }
};