class Solution {
public:
    int minOperations(string s) {
        
        int zeroOnEven = 0;
        int zeroOnOdd  = 0;

        int oneOnEven = 0;
        int oneOnOdd  = 0;

        for( int i = 0 ; i < s.length(); i++)
        {
            if( i % 2 == 0)
            {
                if(s[i] == '0')zeroOnEven += 1;
                else oneOnEven += 1;
            }
            else
            {
                if(s[i] == '0') zeroOnOdd += 1;
                else  oneOnOdd += 1;
            }
        }

        return min( zeroOnEven + oneOnOdd , oneOnEven + zeroOnOdd);
    }
};