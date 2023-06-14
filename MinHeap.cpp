#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
         priority_queue<int,vector<int>,greater<int>>pq;
         vector<int>ans;
         for(int i=0;i<n;++i){
             if(q[i][0]==1 && !pq.empty()){
                  ans.push_back(pq.top());
                  pq.pop();
             }else{
                  pq.push(q[i][1]);
             }
         }
         return ans;
}
