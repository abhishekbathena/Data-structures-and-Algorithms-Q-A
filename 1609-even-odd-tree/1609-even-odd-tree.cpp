class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ind = 0;
        int prev = 0; // Initialize prev to some initial value, for example 0.
        while (!q.empty()) {
            int size = q.size();
            vector<int> temp;
            while (size--) {
                TreeNode* top = q.front();
                q.pop();
                if (top->left) q.push(top->left);
                if (top->right) q.push(top->right);
                if (ind % 2 == 0) { // Even-indexed level
                    if (top->val % 2 == 0 || (temp.size() > 0 && temp.back() >= top->val)) return false;
                } else { // Odd-indexed level
                    if (top->val % 2 != 0 || (temp.size() > 0 && temp.back() <= top->val)) return false;
                }
                temp.push_back(top->val);
            }
            temp.clear();
            ind++;
        }
        return true;
    }
};