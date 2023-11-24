class Solution {
public:
    string sortVowels(string s) {
        vector<int>ele;
        vector<int>ind;

        for(int i=0;i<s.size();i++)
        {
            char temp=tolower(s[i]);
            if(temp=='a'|| temp=='e' || temp=='i'|| temp=='o'|| temp=='u')
            {
                ele.push_back(int(s[i]));
                ind.push_back(i);
            }
        }

        sort(ele.begin(),ele.end());
        for(int i=0;i<ind.size();i++)
        {
            s[ind[i]]=ele[i];
        }

        return s;
    }
};