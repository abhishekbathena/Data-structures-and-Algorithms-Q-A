class Solution {
public:
        bool check(int row,int col,int m,int n,vector<vector<int>>&mat)
        {
            int count=0,count1=0;
            for(int i=0;i<m;i++)
            {
                if(mat[i][col]==1) count++;
            }
            for(int i=0;i<n;i++)
            {
                if(mat[row][i]==1) count1++;
            }
            
            if(count==1 && count1==1) return true;
            return false;
        }
        int numSpecial(vector<vector<int>>& mat) {

            int m=mat.size();
            int n=mat[0].size();
            int count=0;
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(mat[i][j]==1 && check(i,j,m,n,mat))
                    {
                        count++;
                    }
                }
            }
            
            return count;

        }
    };