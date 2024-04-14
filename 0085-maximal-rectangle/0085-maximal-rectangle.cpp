class Solution {
public:

    int largestRectangleArea(vector<int>& heights) 
    {
        stack<int>st;
        int maxi=0;
        for(int i=0;i<=heights.size();i++)
        {
             while(!st.empty() && (i==heights.size()|| heights[st.top()]>=heights[i] ))
            {
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                maxi=max(maxi,height*width);
            }
            st.push(i);
        }

        return maxi;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        vector<int>heights(matrix[0].size(),0);
        int ans=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]=='0')
                {
                    heights[j]=0;
                }
                else heights[j]++;
            }
            ans=max(ans,largestRectangleArea(heights));
        }

        return ans;
    }
};