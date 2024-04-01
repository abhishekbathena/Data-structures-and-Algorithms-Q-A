class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
         int i, j, max_idx; 
        int n=heights.size();
        for(i = 0; i < n - 1; i++)
        { 
            max_idx = i; 
            for (j = i + 1; j < n; j++)
            { 
                if(heights[j] > heights[max_idx]) 
                    max_idx = j; 
            }  
            if(max_idx != i) 
            {
                swap(heights[max_idx], heights[i]); 
                swap(names[max_idx],names[i]);
            }    
        }
        return names;
    }
};