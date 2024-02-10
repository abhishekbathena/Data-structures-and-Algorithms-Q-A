class Solution {
public:
    
    int ispalindromecount(string s,int i,int j,int n)
    {
        int count=0;
        while(i>=0 && j<n && s[i]==s[j])
        {
            i--;
            j++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int evenlen=ispalindromecount(s,i,i+1,n);
            int oddlen=ispalindromecount(s,i,i,n);
            ans+=evenlen+oddlen;
            
        }
        
        return ans;
    }
};