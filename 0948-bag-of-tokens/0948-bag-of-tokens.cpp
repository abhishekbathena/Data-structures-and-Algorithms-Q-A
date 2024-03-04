class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        int maxi=0;
        int score=0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                score++;
                power=power-tokens[i];
                maxi=max(maxi,score);
                i++;
            }
            else if(score>0)
            {
                score--;
                power=power+tokens[j];
                maxi=max(maxi,score);
                j--;
            }
            else
            {
                break;
            }
            
        }
        
        return maxi;
    }
};