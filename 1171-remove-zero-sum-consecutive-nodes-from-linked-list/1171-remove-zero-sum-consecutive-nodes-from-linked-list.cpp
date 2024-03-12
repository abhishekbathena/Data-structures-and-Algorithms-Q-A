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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=new ListNode(0,head);
        int prefix=0;
        unordered_map<int,ListNode*>prefixmap;
        prefixmap[0]=temp;
        
        ListNode* curr=head;
        while(curr)
        {
            prefix+=curr->val;
            prefixmap[prefix]=curr;
            curr=curr->next;
        }
        prefix=0,head=temp;
        
        while(head)
        {
            prefix+=head->val;
            head->next=prefixmap[prefix]->next;
            head=head->next;
        }
        
        return temp->next;
    }
};