class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(edges.size()==0)
        {
            return {0};
        }
        
        unordered_map<int,list<int>>store;
        for(auto a:edges)
        {
            int u=a[0];
            int v=a[1];
            store[u].push_back(v);
            store[v].push_back(u);
        }
        vector<int>leafs;
        
        for(auto a:store)
        {
            if(a.second.size()==1)
            {
                leafs.push_back(a.first);
            }
        }
        
        while(n>2)
        {
            n-=leafs.size();
            vector<int>nleafs;
            
            for(auto a:leafs)
            {
                int adjnode=store[a].front();
                
                store[adjnode].remove(a);
                
                if(store[adjnode].size()==1)
                {
                    nleafs.push_back(adjnode);
                }
            }
            
            leafs=nleafs;
            
        }
        
        return leafs;
        

        
        
    }
};