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
    ListNode* mergeNodes(ListNode* head) {
        if(head==nullptr) return head;
        int ele=0;
        ListNode* dummy=new ListNode();
        ListNode* ans=dummy;
        ListNode* curr=head;
        while(curr)
        {
            if(curr->val==0 && ele!=0) 
            {
                ListNode* t=new ListNode(ele);
                dummy->next=t;
                dummy=dummy->next;
                ele=0;
            }
            else ele+=curr->val;
            curr=curr->next; 
        }
     
        
        return ans->next;
    }
};