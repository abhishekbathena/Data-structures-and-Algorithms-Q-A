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
    
void helper(TreeNode* root, int& ans, int sum) {
    if (!root) {
        return;
    }
    
    sum = sum * 10 + root->val;
    
    if (!root->left && !root->right) {
        ans += sum;
        return;
    }
    
    helper(root->left, ans, sum);
    helper(root->right, ans, sum);
}

    int sumNumbers(TreeNode* root) {
        int ans=0;
        int sum=0;
        helper(root,ans,sum);
       
        return ans;
        
    }
};