//DFS --> 
bool dfs(int start,int vis[],int pathVis[],vector<int>adj[]){
     vis[start]=1;
     pathVis[start]=1;
     for(auto it:adj[start]){
           if(!vis[it]){
             if(dfs(it,vis,pathVis,adj)==true){
               return true;
             }
           }
           else if(pathVis[it]){
                return true;
           }
     }
     pathVis[start]=0;
     return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
          vector<int>adj[n+1];
         for(auto it:edges){
          adj[it.first].push_back(it.second);
         }
         int vis[n+1]={0};
         int pathVis[n+1]={0};
        for(int i=0;i<n;++i){
          if(!vis[i]){
             if(dfs(i,vis,pathVis,adj)==true)return true;
          }
        }
        return false;
} 
// <------ BFS -> Kahn's Algorithm ---->
#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
          vector<int>adj[n+1];
         for(auto it:edges){
          adj[it.first].push_back(it.second);
         }
         int inDegree[n+1]={0};
         for(int i=1;i<=n;++i){
           for(auto it:adj[i]){
               inDegree[it]++;
           }
         }
         queue<int>q;
         for(int i=1;i<=n;++i){
           if(inDegree[i]==0){
             q.push(i);
           }
         }
         int cnt=0;

         while(!q.empty()){
            int node =q.front();
            q.pop();
            cnt++;
          for(auto it:adj[node]){
              inDegree[it]--;
              if(inDegree[it]==0)q.push(it);
          }
         }
         if(cnt==n)return false;
        return true;
}
