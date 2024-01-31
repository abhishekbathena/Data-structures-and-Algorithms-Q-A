class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>res(n,0);
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                int preind=st.top();
                st.pop();
                res[preind]=i-preind;
            }
            st.push(i);
        }
        
        return res;
    }
};