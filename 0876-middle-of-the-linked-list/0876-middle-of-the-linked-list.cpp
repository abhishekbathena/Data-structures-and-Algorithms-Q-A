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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        int s=0;
        while(curr) s++,curr=curr->next;
        int mid=(s/2);
        
        curr=head;
        while(curr && mid>=0)
        {
           if(mid==0) return curr;
            curr=curr->next;
            mid--;
        }
        
        
        return nullptr;
        
    }
};