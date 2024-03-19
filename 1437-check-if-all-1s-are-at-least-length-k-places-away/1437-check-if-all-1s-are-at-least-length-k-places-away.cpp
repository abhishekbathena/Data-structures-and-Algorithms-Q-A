class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c=0,no=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                c++;
            }
            else if(nums[i]==1 && no>0)
            {
                no++;
                if(c<k) return false;
                c=0;
                
            }
            else no++;
        }
        
        return true;
    }
};