class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>first1,first2;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid;
        if(n%2) mid=n/2;
        else mid=(n/2)-1;
        for(int i=0;i<n;i++)
        {
            if(i<=mid) first1.push_back(nums[i]);
            else first2.push_back(nums[i]);
        }
        reverse(first2.begin(),first2.end());
        reverse(first1.begin(),first1.end());
        int f1=first1.size();
        int f2=first2.size();
        int l=0,m=0;
        nums.clear();
        while(l<f1 && m<f2)
        {
            nums.push_back(first1[l]);
            nums.push_back(first2[m]);
            l++;
            m++;
        }
        if(l<f1) nums.push_back(first1[l]);
        else if(m<f2) nums.push_back(first2[m]);
        
    
    }
};
