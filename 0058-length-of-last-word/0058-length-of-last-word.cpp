#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        bool b = false;
        
        // Start from the end of the string
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ' && !b) {
                continue;
            } else if (s[i] != ' ') {
                c++;
                b = true;
            } else {
                // Break the loop if we've counted the last word
                break;
            }
        }
        
        return c;
    }
};
