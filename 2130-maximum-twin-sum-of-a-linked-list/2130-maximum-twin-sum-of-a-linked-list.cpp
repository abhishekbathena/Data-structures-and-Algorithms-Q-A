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
    int pairSum(ListNode* head) {
      ListNode* curr=head;
      vector<int>temp;
        int i=0;
        while(curr) temp.push_back(curr->val),curr=curr->next;
        int j=temp.size()-1;
        int ans=INT_MIN;
        while(i<j)
        {
           ans=max(ans,temp[i]+temp[j]);
            i++;
            j--;
        }
        
        return ans;
        
        
        
    }
};