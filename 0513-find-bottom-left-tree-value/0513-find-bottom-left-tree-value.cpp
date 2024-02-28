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
    int findBottomLeftValue(TreeNode* root) {
          queue<TreeNode*>q;
         q.push(root);
          vector<int>ans;
        while(!q.empty())
        {
            int size=q.size();
            ans.clear();
            while(size--)
            {
                TreeNode* top=q.front();
                ans.push_back(top->val);
                q.pop();
                if(top->left)
                {
                    q.push(top->left);  
                }
                if(top->right) q.push(top->right);
            }
        }
        
        return ans[0];
    
        
    }
};