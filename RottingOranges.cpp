#include<bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here.
      vector<vector<bool>>vis(n,vector<bool>(m,false));
      queue<pair<pair<int,int>,int>>q;
      int fresh=0;
      for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
           if(grid[i][j]==2){ 
             q.push({{i,j},0});
             vis[i][j]=true;
             }
          if(grid[i][j]==1)fresh++;
        }
      }
      int time=0;
          int r[]={-1,0,+1,0};
          int c[]={0,-1,0,+1};
          int cnt=0;
          while(!q.empty()){
              auto front=q.front();
              q.pop();
              int row=front.first.first;
              int col=front.first.second;
              int t=front.second;
              time=max(time,t);
            for(int i=0;i<4;++i){
                 int nrow=row+r[i];
                 int ncol=col+c[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] 
            && grid[nrow][ncol]==1){
                vis[nrow][ncol]=true;
                q.push({{nrow,ncol},t+1});
                cnt++;
            }  
            }
          }
        if(fresh!=cnt)return -1;
          return time;
      
}
