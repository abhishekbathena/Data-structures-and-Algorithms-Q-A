/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* first=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            first=first->next;
            fast=fast->next->next;
            if(first==fast) return true;
        }
        return false;
    }
};