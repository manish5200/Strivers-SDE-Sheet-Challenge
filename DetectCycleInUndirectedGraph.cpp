//BFS
#include<bits/stdc++.h>
bool detect(int src ,int vis[] ,vector<int>adj[]){
        vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src,-1});
     while(!q.empty()){
         int node = q.front().first;
         int parent=q.front().second;
          q.pop();
         for(auto it:adj[node]){
             if(!vis[it]){
                 vis[it]=1;
                 q.push({it,node});
             }
             else if(parent != it){
                 return true;
             }
         }
     }
     return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
          vector<int>adj[n+1];
          for(auto it:edges){
              adj[it[0]].push_back(it[1]);
              adj[it[1]].push_back(it[0]);
          }
          int vis[n+1]={0};
          for(int i=0;i<n;++i){
              if(!vis[i]){
                  if(detect(i,vis,adj)) return "Yes";
              }
          }
          return "No";
}

//DFS 
#include<bits/stdc++.h>
bool dfs(int src ,int parent,int vis[] ,vector<int>adj[]){
        vis[src]=1;
      for(auto it:adj[src]){
         if(!vis[it]){
             vis[it]=1;
             if(dfs(it,src,vis,adj)==true)return true;
         }
         else if(parent != it){
             return true;
         }
      }
      return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
          vector<int>adj[n+1];
          for(auto it:edges){
              adj[it[0]].push_back(it[1]);
              adj[it[1]].push_back(it[0]);
          }
          int vis[n+1]={0};
          for(int i=0;i<n;++i){
              if(!vis[i]){
                  if(dfs(i,-1,vis,adj)) return "Yes";
              }
          }
          return "No";
}
