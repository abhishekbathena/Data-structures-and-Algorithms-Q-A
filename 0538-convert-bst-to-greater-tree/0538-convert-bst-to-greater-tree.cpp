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
    
    void helper(TreeNode* root,stack<TreeNode*>&st)
    {
        if(root==nullptr)
        {
            return;
        }
        helper(root->left,st);
        st.push(root);
        helper(root->right,st);
        
    }
    TreeNode* convertBST(TreeNode* root) {
        stack<TreeNode*>st;
        helper(root,st);
        int sum=0;
        while(!st.empty())
        {
            TreeNode* top=st.top();
            st.pop();
            sum+=top->val;
            top->val=sum;    
        }
        return root;
    }
};