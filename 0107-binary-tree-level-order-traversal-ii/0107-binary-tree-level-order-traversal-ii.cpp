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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>temp;
            while(size--)
            {
                TreeNode* top=q.front();
                  if(top!=nullptr)
                  {
                temp.push_back(top->val);
                q.pop();
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
                  }
            }
            ans.push_back(temp); 
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};