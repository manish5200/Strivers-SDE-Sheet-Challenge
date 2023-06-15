//DFS1-->
#include<bits/stdc++.h>
bool dfs(int start,int col,int color[],vector<int>adj[]){
	     color[start]=col;
	    for(auto it:adj[start]){
			if(color[it]==-1){
				if(dfs(it,!col,color,adj)==false){
					return false;
				}
			}else if(color[it]==color[start]){
				return false;
			}
		}
		return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	    int n =edges.size();
			vector<int>adj[n+1];
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
                    if(edges[i][j]){
						adj[i].push_back(j);
						adj[j].push_back(i);
					}
				}
			}
            int color[n+1];
            memset(color,-1,sizeof color);
			for(int i=0;i<n;++i){
				if(color[i]==-1){
					if(dfs(i,0,color,adj)==false)return false;
				}
			}
			return true;
}
//DFS2 --->
#include<bits/stdc++.h>
bool dfs(int start,int color[],vector<int>adj[]){
	    for(auto it:adj[start]){
			if(color[it]==-1){
				color[it]=!color[start];
				if(dfs(it,color,adj)==false){
					return false;
				}
			}else if(color[it]==color[start]){
				return false;
			}
		}
		return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	    int n =edges.size();
			vector<int>adj[n+1];
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
                    if(edges[i][j]){
						adj[i].push_back(j);
						adj[j].push_back(i);
					}
				}
			}
            int color[n+1];
            memset(color,-1,sizeof color);
			for(int i=0;i<n;++i){
				if(color[i]==-1){
					color[i]=1;
					if(dfs(i,color,adj)==false)return false;
				}
			}
			return true;
}

//<----- BFS ---->
#include<bits/stdc++.h>
bool check(int start,int color[],vector<int>adj[]){
	  queue<int>q;
	  color[start]=1;
	  q.push(start);
	  while(!q.empty()){
		  int node=q.front();
		  q.pop();
		for(auto it:adj[node]){
			if(color[it]==-1){
				color[it]= !color[node];
				q.push(it);
			}
			else if(color[it]==color[node]){
				return false;
			}
		}
	  }
	  return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	    int n =edges.size();
			vector<int>adj[n+1];
			for(int i=0;i<n;++i){
				for(int j=0;j<n;++j){
                    if(edges[i][j]){
						adj[i].push_back(j);
						adj[j].push_back(i);
					}
				}
			}
            int color[n+1];
            memset(color,-1,sizeof color);
			for(int i=0;i<n;++i){
				if(color[i]==-1){
					if(check(i,color,adj)==false)return false;
				}
			}
			return true;
}
