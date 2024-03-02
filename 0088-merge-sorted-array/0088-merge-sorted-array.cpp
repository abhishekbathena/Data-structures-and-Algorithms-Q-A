class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        int i=0,j=0;
        while(i<m && j<n)
        {
         ans.push_back(nums1[i++]);
        ans.push_back(nums2[j++]);
        }
        while(i<m)
        {
            ans.push_back(nums1[i++]);
        }
        while(j<n)
        {
            ans.push_back(nums2[j++]);
        }
        sort(ans.begin(),ans.end());
        nums1.clear();
        for(auto a:ans) nums1.push_back(a);
        
    }
};