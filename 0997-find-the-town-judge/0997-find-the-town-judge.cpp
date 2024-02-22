class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>m;
    if(n==1 && trust.size()==0) return 1;
        for(auto a:trust)
        {
            m[a[1]]++; 
        }
       
        
        for(auto a:m)
        {
            if(a.second==n-1)
            {
                  for(auto b:trust)
                  {
                      if(a.first==b[0]) return -1;
                  }
                    return a.first;
            }
        }
      
        
        return -1;
    }
};