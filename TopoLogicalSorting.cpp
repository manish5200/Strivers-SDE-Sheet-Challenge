//DFS ->
#include <bits/stdc++.h> 
void DFS(int node,stack<int>&st,bool vis[] ,vector<int>adj[]){
        vis[node]=true;
     for(auto it:adj[node]){
          if(!vis[it])DFS(it,st,vis,adj);
     }
     st.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
        stack<int>st;
        vector<int>adj[v];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
        }
      bool vis[v]={false};
      for(int i=0;i<v;++i){
          if(!vis[i]){
              DFS(i,st,vis,adj);
          }
      }
      vector<int>topo;
      while(!st.empty()){
          topo.push_back(st.top());
          st.pop();
      }
      return topo;
} 
// BFS ->Kahn's Algorithm 
#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
        
        vector<int>adj[v];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
        }
      int inDegree[v]={0};
      for(int i=0;i<v;++i){
      for(auto it:adj[i]){
           inDegree[it]++;
        }
      }
      queue<int>q;
      for(int i=0;i<v;++i){
          if(inDegree[i]==0){
              q.push(i);
          }
      }
       vector<int>topo;
       while(!q.empty()){
           int node=q.front();
           q.pop();
           topo.push_back(node);
          for(auto it:adj[node]){
            inDegree[it]--;
            if(inDegree[it]==0)q.push(it);
          }
       }
       return topo;
}
