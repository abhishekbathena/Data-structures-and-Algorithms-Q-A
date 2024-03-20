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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first = list1;
        for (int i = 1; i < a; ++i) {
            first = first->next;
        }
        
        ListNode* sec = list1;
        for (int i = 0; i < b + 1; ++i) {
            sec = sec->next;
        }
        
        first->next = list2;
        ListNode* curr = list2;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = sec;
        
        return list1;
    }
};