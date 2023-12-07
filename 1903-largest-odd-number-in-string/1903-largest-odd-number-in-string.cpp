class Solution {
public:
    string largestOddNumber(string num) {
        int ind;
        for(int i=num.size()-1;i>=0;i--)
        {
            int n=num[i]-'0';
            if(n%2)
            {
             ind=i;
            break;                
            }
        }
        string ans="";
        
        for(int i=0;i<=ind;i++)
        {
            ans+=num[i];
        }
        
        return ans;
    }
};