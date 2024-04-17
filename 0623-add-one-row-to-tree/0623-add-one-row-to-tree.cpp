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
    
    void helper(TreeNode* root,int val,int depth,int level)
    {
        if(!root) return;
        if(level==depth-1)
        {
            TreeNode* newNodel=new TreeNode(val);
             TreeNode* newNoder=new TreeNode(val);
            TreeNode* temp=root->left;
            TreeNode* tempr=root->right;
            root->left=newNodel;
            newNodel->left=temp;
            root->right=newNoder;
            newNoder->right=tempr;
            return;  
        }
        helper(root->left,val,depth,level+1);
        helper(root->right,val,depth,level+1);
        
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth==1)
        {
            TreeNode* newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
        helper(root,val,depth,1);
        return root;
        
    }
};