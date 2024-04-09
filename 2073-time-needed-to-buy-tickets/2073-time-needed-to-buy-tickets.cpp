class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        int ele=tickets[k];
        int count=0;
        for(int i=0;i<tickets.size();i++)
        {
            if(tickets[i]<=ele) ans+=tickets[i];
            else ans+=ele;
            
            if(tickets[i]>=ele && i>k) count++;
        }
        return ans-count;
    }
};