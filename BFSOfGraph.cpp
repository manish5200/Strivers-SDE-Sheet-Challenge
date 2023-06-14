\\Contain both connected and not connected graph
#include <bits/stdc++.h> 
vector<int> BFS(int v, vector<pair<int, int>> edges)
{   
      vector<int>ans;
       vector<int>adj[v+1];
       vector<bool>vis(v,false);
      for(auto it:edges){
          adj[it.first].emplace_back(it.second);
          adj[it.second].emplace_back(it.first);
      }
       for(int i=0;i<v;++i)sort(adj[i].begin(),adj[i].end()); 
    queue<int>q;
    for(int i=0;i<v;++i){
    if(!vis[i]){
      q.push(i);
      vis[0]=true;
     while(!q.empty()){
         int top=q.front();
         q.pop();
         ans.push_back(top);
        for(auto it:adj[top]){
          if(!vis[it]){
            vis[it]=true;
            q.push(it);
             }
           }
          }
        }
     }
     return ans;
}
