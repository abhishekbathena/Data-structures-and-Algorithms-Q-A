class Solution {
public:
    int numComponents(ListNode* head, vector<int>& v) {
        ListNode* temp=head;
        bool component=false;
        int counter=0;
       while(temp)
       {
            if(count(v.begin(),v.end(),temp->val)>0&& component==false)
            {
                counter++;
                component =true;
            }
            else if(count(v.begin(),v.end(),temp->val)==0) component=false;          
           temp=temp->next;
       }
       return counter;
    }
};