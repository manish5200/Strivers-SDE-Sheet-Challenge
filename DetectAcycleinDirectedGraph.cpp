
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
