class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>>pq(nums.begin(),nums.end());
        int n;
        while(k--)
        {
            n=pq.top();
            pq.pop();
        }
        
        return n;
    }
};