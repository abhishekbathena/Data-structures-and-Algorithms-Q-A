class Solution {
public:
    
    string longpalindrome(string s,int i,int j,int n)
    {
        string temp="";
        while(i>=0 && j<n && s[i]==s[j])
        {
           if(i==j) temp+=s[i];
            else
            {
                temp=s[i]+temp;
                temp+=s[j];  
            }
            i--;
            j++;
        }
        
        return temp;
        
    }
    string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            string evenlen=longpalindrome(s,i,i+1,n);
            string oddlen=longpalindrome(s,i,i,n);
            if(evenlen.size()>oddlen.size() && evenlen.size()>ans.size()) 
            {
                ans=evenlen;
            }
            else if(oddlen.size()>ans.size()) ans=oddlen;
        }
        
        return ans;
    }
};