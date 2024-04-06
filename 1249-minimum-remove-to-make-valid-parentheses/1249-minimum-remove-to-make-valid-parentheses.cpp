class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++)
        {
             if((s[i]=='(' or s[i]==')') && st.empty())  st.push({s[i],i});
             else if(s[i]=='(') st.push({s[i],i});
             else if(s[i]==')' && !st.empty())
             {
                 if(st.top().first=='(') st.pop();
                 else st.push({s[i],i});
             }
             else if(s[i]==')') st.push({s[i],i});
        }
        
        while(!st.empty())
        {
            auto a=st.top().second;
            s[a]=' ';
            st.pop();
        }
        string ans="";
        for(auto a:s)
        {
            if(a!=' ') ans+=a;
        }
        return ans;
            
    }
};