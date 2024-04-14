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
    
    void sumtree(TreeNode* root,int &sum,int k)
    {
        if(!root) return;
        
         sumtree(root->left,sum,1);
        if(!root->left && !root->right && k==1) sum+=root->val;
        sumtree(root->right,sum,0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        sumtree(root,sum,-1);
        
        return sum;
        
    }
};