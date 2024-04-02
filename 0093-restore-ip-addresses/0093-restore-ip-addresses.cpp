class Solution {
public:
    vector<string>ans;
    
    bool isvalidnum(string s)
    {
        return stoi(s)>=0 && stoi(s)<=255 && to_string(stoi(s))==s;
    }
    bool isvalidstring(string s)
    {
        int n=s.size();
        
        s.push_back('.');
        int i=0;
        while(i<=n)
        {
           string temp="";
            while(s[i]!='.')
            {
                temp+=s[i++];
            }
            i++;
            if(temp.size()>3 or !isvalidnum(temp)) return false;
        }
        
        s.pop_back();
        return true;
    }
    
    
    void solve(int idx,int dot,string &ds,string &s)
    {
         int n=s.size();
        if(idx==n){
            if(isvalidstring(ds) and dot==0){
                ans.push_back(ds);
            }
            return ;
        }
        ds.push_back(s[idx]);
        if(dot>=1 and ds.back()!='.' and idx!=n-1){
            ds.push_back('.');
            solve(idx+1,dot-1,ds,s);
            ds.pop_back();
        }
        solve(idx+1,dot,ds,s);
        ds.pop_back();
        
    }
    vector<string> restoreIpAddresses(string s) {
        string ds="";
        solve(0,3,ds,s);
        return ans;
    }
};
