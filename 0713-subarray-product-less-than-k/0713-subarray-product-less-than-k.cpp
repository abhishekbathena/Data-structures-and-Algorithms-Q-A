class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0;
        int count=0;
        int numproduct=1;
        if(k<=1) return 0;
        for(int i=0;i<nums.size();i++)
        {
            
            numproduct=numproduct*nums[i];
            while(numproduct>=k) numproduct=numproduct/nums[start],start++;
            
            count+=i-start+1;
            
            
        }
        
        return count;
    }
};