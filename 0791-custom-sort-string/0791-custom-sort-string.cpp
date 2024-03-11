class Solution {
public:
    std::string customSortString(std::string order, std::string s) {
        std::sort(s.begin(), s.end(), [&](char a, char b) {
            return order.find(a) < order.find(b);
        });
        return s;
    }
};