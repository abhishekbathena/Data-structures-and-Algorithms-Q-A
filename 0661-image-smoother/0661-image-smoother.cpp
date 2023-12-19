class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> result(rows, vector<int>(cols, 0));
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                
                int totalsum=0,count=0;
                for(int l=max(0,i-1);l<min(rows,i+2);l++)
                {
                    for(int m=max(0,j-1);m<min(cols,j+2);m++)
                    {
                        totalsum+=img[l][m];
                        count++;
                    }
                }
                
                result[i][j]=totalsum/count;
            }
        }
        return result;
    }
};
