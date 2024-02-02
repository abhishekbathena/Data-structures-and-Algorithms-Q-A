class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            string n="";
            for(int j=i;j<s.size();j++)
            {
                n+=s[j];
                int num=stoi(n);
                if(num>=low and num<=high)
                {
                    ans.push_back(num);
                }
                
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};