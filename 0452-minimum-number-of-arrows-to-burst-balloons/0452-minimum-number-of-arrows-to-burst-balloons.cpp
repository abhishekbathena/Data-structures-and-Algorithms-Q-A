class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int c = 1;
        int prevEnd = arr[0][1];
        for (int i = 1; i < n; i++) {
            if (arr[i][0] > prevEnd) {
                c++;
                prevEnd = arr[i][1];
            } else {
                prevEnd = min(prevEnd, arr[i][1]);
            }
        }
        return c;
    }
};
