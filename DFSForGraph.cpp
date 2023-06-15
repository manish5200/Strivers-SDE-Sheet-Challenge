void dfs(int node,vector<bool>&vis,vector<int>adj[],vector<int>&ans){
           
            vis[node]=true;
            ans.push_back(node);
        for(auto it:adj[node]){
             if(!vis[it]){
                 vis[it]=true;
                 dfs(it,vis,adj,ans);
              }
        }
 
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
        vector<int>adj[V+1];
      for(auto it:edges){
          adj[it[0]].emplace_back(it[1]);
          adj[it[1]].emplace_back(it[0]);
      }
       vector<bool>vis(V,false);
       vector<vector<int>>res;
    for(int i=0;i<V;++i){
         if(!vis[i]){
              vector<int>ans;
             dfs(i,vis,adj,ans);
              res.push_back(ans);
         }
    }
      return res;
}
