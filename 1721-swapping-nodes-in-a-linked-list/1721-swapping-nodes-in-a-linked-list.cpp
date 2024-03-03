/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int size=0;
        ListNode* curr=head;
        vector<int>ans;
        while(curr)
        {
            size++;
            ans.push_back(curr->val);
            curr=curr->next;
        }
        int f=k,fval=ans[k-1];
        int l=size-k+1;
        int lval=ans[l-1];
        
        int i=0;
        curr=head;
        while(curr)
        {
            i++;
            if(i==f) curr->val=lval;
            if(i==l) curr->val=fval;
            curr=curr->next;
        }
        return head;
    }
};