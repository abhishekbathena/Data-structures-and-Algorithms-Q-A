class Solution {
public:
        vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
            	vector<vector<int>>ans(grid.size(), vector<int>(grid[0].size(), 0));
        vector<int>b(grid.size(),0);
        vector<int>c(grid[0].size(),0);
        for(int i=0;i<grid.size();i++)
        {
            int s=0,p=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                {
                    s++;
                }
                else
                {
                    p++;
                }
            }
            b[i]=p-s;
        }
        for(int i=0;i<grid[0].size();i++)
        {
            int s=0,p=0;
            for(int j=0;j<grid.size();j++)
            {
                if(grid[j][i]==0)
                {
                    s++;
                }
                else
                {
                    p++;
                }
            }
            c[i]=p-s;
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                ans[i][j]=b[i]+c[j];
            }
        }
        return ans;
    }
    };