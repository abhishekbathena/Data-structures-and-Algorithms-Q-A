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
    int amountOfTime(TreeNode* root, int start) {
        queue<TreeNode*> q;
        unordered_map<TreeNode*,TreeNode*> parent;
        q.push(root);
        TreeNode* pos;
        while(!q.empty()){
            TreeNode*front=q.front();
            q.pop();
            if(front->val==start) pos=front;
            if(front->left){
                parent[front->left] = front;
                q.push(front->left);
            }
            if(front->right){
                parent[front->right] = front;
                q.push(front->right);
            }
        }

        unordered_map<TreeNode*,bool> visited;
        q.push(pos);
        visited[pos]=true;
        int cnt=0;
        while(!q.empty())
        {
            int size=q.size();
            int f1=0;
            for(int i=0;i<size;i++)
            {
                TreeNode*front=q.front();
                q.pop();
                if(front->left  &&  !visited[front->left]){
                    f1=1;
                    q.push(front->left);
                    visited[front->left]=true;
                }
                if(front->right  &&  !visited[front->right]){
                    f1=1;
                    q.push(front->right);
                    visited[front->right]=true;
                }
                if(parent[front]  &&  !visited[ parent[front] ]){
                    f1=1;
                    q.push(parent[front]);
                    visited[parent[front]]=true;
                }
            }
            if(f1) cnt++;
        }

        return cnt;


    }
};