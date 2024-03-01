class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int onecount=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') onecount++;
            s[i]='0';
        }
        
        int size=s.size();
        s[size-1]='1';
        onecount--;
        for(int i=0;i<onecount;i++)
        {
            s[i]='1';
        }
        return s;
        
    }
};