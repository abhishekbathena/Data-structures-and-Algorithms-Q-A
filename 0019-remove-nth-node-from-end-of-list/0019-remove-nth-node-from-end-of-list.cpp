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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s=0;
        ListNode* curr=head;
        if(head==nullptr) return nullptr;
        if(!head->next) return nullptr;
        while(curr)
        {
            curr=curr->next;
            s++;
        }
        int r=s-n;
        int i=0;
        curr=head;
        ListNode* prev=head;
        if(r<=0)
        {
            head=head->next;
            return head;
        }
        while(i<r && curr)
        {
            prev=curr;
           curr=curr->next;
           i++;
        }
        if(curr->next)
        {
            prev->next=curr->next;
        }
        else
        {
            prev->next=nullptr;
        }
        
        
        return head;
    }
};