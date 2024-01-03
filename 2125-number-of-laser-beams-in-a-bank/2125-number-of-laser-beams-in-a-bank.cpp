class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int temp=0;
        for(int i=0;i<bank.size();i++)
        {
            int count=0;
            for(int j=0;j<bank[0].size();j++)
            {
               if(bank[i][j]=='1') count++; 
            }
            if(count!=0)
            {
            ans=ans+count*temp;
            temp=count;
            }
        }
        return ans;
    }
};