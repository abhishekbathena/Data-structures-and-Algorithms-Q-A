class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // Get the size of the garbage vector
        int n = garbage.size();
        
        // Variables to keep track of the count of each type of garbage
        int m = 0, g = 0, p = 0;

        // Variables to store the last occurrence of each type of garbage
        int lastm = -1, lastg = -1, lastp = -1;

        // Loop through the garbage vector in reverse order
        for (int i = n - 1; i >= 0; i--) {
            // Loop through each character in the current garbage string
            for (auto j : garbage[i]) {
                if (j == 'M') {
                    // If it's the first occurrence of M, update lastm
                    if (m == 0) lastm = i;
                    m++;
                } else if (j == 'P') {
                    // If it's the first occurrence of P, update lastp
                    if (p == 0) lastp = i;
                    p++;
                } else {
                    // If it's the first occurrence of G, update lastg
                    if (g == 0) lastg = i;
                    g++;
                }
            }
        }

        // Calculate the prefix sum of the travel vector
        for (int i = 1; i < n - 1; i++) {
            travel[i] += travel[i - 1];
        }

        // Calculate the total time required for garbage collection
        int ans = p + g + m;
        if (lastp > 0) ans += travel[lastp - 1];
        if (lastg > 0) ans += travel[lastg - 1];
        if (lastm > 0) ans += travel[lastm - 1];

        // Return the final answer
        return ans;
    }
};