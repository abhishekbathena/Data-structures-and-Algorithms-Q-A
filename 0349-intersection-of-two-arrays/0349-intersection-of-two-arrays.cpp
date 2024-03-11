class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int>copy2;
      for(auto a:nums1)
      {
          if(find(nums2.begin(),nums2.end(),a)!=nums2.end() && find(copy2.begin(),copy2.end(),a)==copy2.end()  ) copy2.push_back(a);
      }
        return copy2;
    }
};