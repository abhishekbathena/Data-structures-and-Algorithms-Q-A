class Solution {
public:
    vector<int>arr;
    Solution(vector<int>& w) 
    {
        for(auto a:w)
        {
            if(arr.empty())
            {
                arr.push_back(a);
            }
            else
            {
                arr.push_back(a+arr.back());
            }
        }
    }
    
    int pickIndex() 
    {
        int last=arr.back();
        int ind=rand()%last;
        auto it=upper_bound(arr.begin(),arr.end(),ind);
        return it-arr.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */