/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> r1, r2;

    void helper(TreeNode* root, vector<int>& result) {
        if (!root) {
            return;
        }
        helper(root->left, result);
        helper(root->right, result);
        if (!root->left && !root->right) {
            result.push_back(root->val);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        helper(root1, r1);
        helper(root2, r2);

        if (r1.size() != r2.size()) {
            return false;
        }

        for (int i = 0; i < r1.size(); ++i) {
            if (r1[i] != r2[i]) {
                return false;
            }
        }

        return true;
    }
};
