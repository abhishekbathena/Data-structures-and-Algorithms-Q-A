class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>first1,first2;
        vector<int>temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end(),greater<int>());
        int n=nums.size();
        int j=0;
        for(int i=1;i<n;i=i+2)
        {
            nums[i]=temp[j];
            j++;
        }
        for(int i=0;i<n;i=i+2)
        {
            nums[i]=temp[j];
            j++;
        }

    
    }
};
