#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> processQueries(std::vector<int>& queries, int m) {
        std::vector<int> res;
        std::vector<int> mv(m, 0);

        for (int i = 0; i < m; ++i)
            mv[i] = i + 1;

        for (int i = 0; i < queries.size(); ++i) {
            auto it = std::find(mv.begin(), mv.end(), queries[i]);
            int index = std::distance(mv.begin(), it);
            res.push_back(index);

            // Move the element to the beginning
            mv.erase(it);
            mv.insert(mv.begin(), queries[i]);
        }

        return res;
    }
};
