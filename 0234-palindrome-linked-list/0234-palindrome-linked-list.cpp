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
    bool isPalindrome(ListNode* head) {
      ListNode* head1=nullptr;
        ListNode* curr=head;

        while(curr!=nullptr)
        {
            ListNode* temp=new ListNode(curr->val);
            temp->next=head1;
            head1=temp;
            curr=curr->next;    
        }

        while(head&&head1)
        {
            if(head->val!=head1->val) return false;
            head=head->next;
            head1=head1->next;
        }
        return true;
    }
};