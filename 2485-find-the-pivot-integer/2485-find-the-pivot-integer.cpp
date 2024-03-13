class Solution {
public:
    int pivotInteger(int n) {
        int sumn=(n*(n+1))/2;
        int i=n;
        int suml=0;
        while(i>=0)
        {
           suml+=i;
           if(suml==sumn) return i;
            sumn-=i;
           i--;
        }
        
        return -1;
    }
};