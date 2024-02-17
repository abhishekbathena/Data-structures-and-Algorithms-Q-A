
   #include <vector>
#include <queue>
#include <iostream>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> gaps;

        for (int i = 0; i < heights.size() - 1; ++i) {
            int diff = heights[i + 1] - heights[i];
            if (diff > 0) {
                gaps.push(-diff);
                if (gaps.size() > ladders) {
                    bricks += gaps.top();
                    gaps.pop();
                }
                if (bricks < 0) return i;
            }
        }

        return heights.size() - 1;
    }
};



