class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right && s[left] == s[right]) {
            char curr = s[left];
            while (left <= right && s[left] == curr)
                left++;
            while (left <= right && s[right] == curr)
                right--;
        }
        
        return max(right - left + 1, 0);
    }
};