class Solution {
public:
   
    void helper(int ind,int target,vector<string>&ans,string s,string temp,long long prev,long long res)
    {

            if(ind==s.size())
            {
                if(res==target)
                ans.push_back(temp);
                return;
            }
            long long curr=0;
            string st="";
            for(int i=ind;i<s.size();i++)
            {
                if(i>ind && s[ind]=='0')
                {
                break;
                }
                st+=s[i];
                curr=curr*10+s[i]-'0';
                if(ind==0)
                {
                    helper(i+1,target,ans,s,temp+st,curr,curr);
                }
                else
                {
                    helper(i+1,target,ans,s,temp+"+"+st,curr,res+curr);
                    helper(i+1,target,ans,s,temp+"-"+st,-curr,res-curr);
                    helper(i+1,target,ans,s,temp+"*"+st,prev*curr,res-prev+prev*curr);
                }
            }
            return;
    }

    vector<string> addOperators(string num, int target) {
        vector<string>ans;
        long long prev=0;
        helper(0,target,ans,num,"",0,0);
        return ans;



    }
};