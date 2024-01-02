class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto a:words) 
        {
            if(ispalindrome(a)) return a;
        }
        
        return "";
    }
    
    bool ispalindrome(string s)
    {
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};