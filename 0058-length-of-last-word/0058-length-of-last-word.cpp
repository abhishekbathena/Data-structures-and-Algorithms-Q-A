class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        bool b=false;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && !b)
            {
              continue;
            
            }
            else if(s[i]!=' ') c++,b=true;
            else break;
        }
        return c;
        
    }
};