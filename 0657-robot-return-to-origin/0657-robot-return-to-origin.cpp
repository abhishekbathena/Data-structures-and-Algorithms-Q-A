class Solution {
public:
    bool judgeCircle(string moves) {
        int ud=0,rl=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U') ud++;
            else if(moves[i]=='D') ud--;
            else if(moves[i]=='L') rl--;
            else rl++; 
        }
        if(ud==0 and rl==0) return true;
        return false;
    }
};