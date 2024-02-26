class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        TreeNode* root = NULL;
        unordered_map<int,TreeNode*> m1;
        unordered_map<int,int> m2;
        for(int i = 0; i < descriptions.size(); i++) {
            int par = descriptions[i][0];
            int chil = descriptions[i][1];
            TreeNode* temp_1 = NULL;
            TreeNode* temp_2 = NULL;
            if(m1[par] == 0) {
                temp_1 = new TreeNode(par);
                m1[par] = temp_1;
            } else {
                temp_1 = m1[par];
            }
            if(m1[chil] == 0) {
                temp_2 = new TreeNode(chil);
                m1[chil] = temp_2;
                m2[chil] = 1;
            } else {
                temp_2 = m1[chil];
                m2[chil] = 1;
            }
            if(descriptions[i][2] == 1) {
                temp_1->left = temp_2;
            } else {
                temp_1->right = temp_2;
            }
        }
        for(int i = 0; i < descriptions.size(); i++) {
            if(m2[descriptions[i][0]] == 0) {
                return m1[descriptions[i][0]];
            }
        }
        return NULL;
    }
};
