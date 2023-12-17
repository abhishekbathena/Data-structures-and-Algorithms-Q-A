class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool b=true;
        if(arr.size()==1) return false;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]>arr[i] && b==true)
            {
               b=true; 
            }
            else
            {
                if(i==0) return false;
                b=false;
                if(arr[i+1]>=arr[i]) return false;
            }
        }
        if(b==true) return false;
        return true;
    }
};