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
     string getUniqueString(TreeNode * head)
     {
            string temp = "";
            queue<TreeNode*> q;
            q.push(head);
            while(q.size()){
                auto it = q.front();
                q.pop();
                temp += to_string(it->val);
                if(it->left){
                    q.push(it->left);
                }else{
                    temp += "null";
                }
                if(it->right){
                    q.push(it->right);
                }else{
                    temp += "null";
                }
            }
    return temp;
 }
    TreeNode* construct(vector<int>v,unordered_set<string>&st)
    {
        TreeNode* head=new TreeNode(v[0]);
        for(int i=1;i<v.size();i++)
        {
            TreeNode* root=head;
            while(root)
            {
                
                if(v[i]<root->val)
                {
                    if(!root->left && v[i]!=root->val)
                    {
                        root->left=new TreeNode(v[i]);
                    }
                    root=root->left;
                }
                else
                {
                    if(!root->right && v[i]!=root->val)
                    {
                        root->right=new TreeNode(v[i]);
                    }
                    root=root->right;
                }
            }
        }
        
        string temp = getUniqueString(head);
        if(st.count(temp))
        {
            return NULL;
        }
        else
        {
            st.insert(temp);
        }

        return head;
   
        
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*>ans;
        vector<int>vec;
        for(int i=1;i<=n;i++) vec.push_back(i);
        unordered_set<string>st;
        do
        {
            TreeNode* curr=construct(vec,st);
            if(curr)
            {
                ans.push_back(curr);
            }      
        }while(next_permutation(vec.begin(),vec.end()));
        
            return ans;
        
    }
};