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
  char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    void helper(TreeNode* root,vector<string>&ans,string sum)
    {
        if(!root) return;
        if(!root->left && !root->right)
        {
           sum+=a[root->val];
            reverse(sum.begin(),sum.end());
            ans.push_back(sum);
            return;
        }
        
        helper(root->left,ans,sum+a[root->val]);
        helper(root->right,ans,sum+a[root->val]);
    }
    string smallestFromLeaf(TreeNode* root) {
         
        vector<string>temp;
        helper(root,temp,"");
        sort(temp.begin(),temp.end());
       
        return temp[0];
    }
};