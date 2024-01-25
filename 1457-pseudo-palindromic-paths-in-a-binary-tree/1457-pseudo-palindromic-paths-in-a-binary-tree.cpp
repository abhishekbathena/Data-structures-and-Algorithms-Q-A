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

    int pseudoPalindromicPaths (TreeNode* root) {
  
        vector<int>digits(10,0);
        return helper(root,digits);
        
        
    }
    
    int helper(TreeNode* root,vector<int>&digits)
    {
        
        if(root==nullptr) return 0;
        
        digits[root->val]++;
        if(root->left==nullptr && root->right==nullptr)
        {
            int checkodds=check(digits);
            digits[root->val]--;
            
            return (checkodds<=1)?1:0 ;
        }
        
        int left=helper(root->left,digits);
        int right=helper(root->right,digits);
        
        digits[root->val]--;
        
        return left+right;
    }
    
    int check(vector<int>digits)
    {
        int c=0;
        for(int i=1;i<10;i++)
        {
            if((digits[i])&1) c++;
        }
        return c;
    }
};