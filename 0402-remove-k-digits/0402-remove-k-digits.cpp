class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==0) return num;
        if(num.length()==k) return "0";
        if(num.length()<=k) return "0";
        stack<char>st;
        st.push(num[0]);
        for(int i=1;i<num.size();i++)
        {
            while(k>0 && !st.empty() && num[i]<st.top())
            {
                k--;
                st.pop();
            }
            st.push(num[i]);
            if(st.size() == 1 && num[i] == '0')
                st.pop();
        }

        while(k>0 && !st.empty())
        {
            k--;
            st.pop();
        }
        
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
       if(ans=="") return "0";
        return ans;
    }
};