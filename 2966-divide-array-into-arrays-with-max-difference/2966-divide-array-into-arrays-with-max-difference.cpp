class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
    vector<vector<int>> result;
    vector<int> currentArray;

    if (nums.size() < 3) {
        return result;  // It is impossible to satisfy the conditions with less than 3 elements.
    }

    // Sort the input array.
    vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end());

    for (int i = 0; i < sortedNums.size() - 2; ++i) {
        if (sortedNums[i + 2] - sortedNums[i] <= k) {
            currentArray = {sortedNums[i], sortedNums[i + 1], sortedNums[i + 2]};
            i=i+2;
            result.push_back(currentArray);
        }
    }
    int len=nums.size();
    len=len/3;
    if(result.size()!=len) return {};
    

    return result; 
        
    }
};