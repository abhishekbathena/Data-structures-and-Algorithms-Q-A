class Solution {
public:
    vector<int>v;
    unordered_map<int,int>m;
    vector<int> findErrorNums(vector<int>& a) {
        sort(a.begin(),a.end());
        for(int p=1;p<=a.size();p++) 
            m[p] = 0;
        for(auto &p:a)
            m[p]++;
        for(auto &p:m){
          if(p.second == 2){
            v.push_back(p.first);
              break;
          } 
        } 
        for(auto &p:m){
           if(p.second == 0){
             v.push_back(p.first);
               break;
           } 
        }  
         
        return v;
    }
};