class Solution {
public:
    int maxDepth(string s) {
       int c=0;
       int ma=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='(') c++;
           else if(s[i]==')') ma=max(ma,c),c--;
       } 
       return ma;
    }
};