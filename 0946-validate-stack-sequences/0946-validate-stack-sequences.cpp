class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0,pushsize=pushed.size(),popsize=popped.size();
        stack<int>st;
        st.push(pushed[i]);
        i++;
        while(i<pushsize || j<popsize)
        {
            if(st.empty() && i<pushsize) 
            {
                st.push(pushed[i]);
                i++;
            }
           else if(st.top()==popped[j])
           {
               st.pop();
               j++;
           }
            else
            {
               
                if(i>=pushsize) return false;
                else
                {
                    st.push(pushed[i]);
                    i++;
                }
            } 
        }
        
        return true;
        
    }
};