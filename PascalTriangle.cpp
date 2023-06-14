#include <bits/stdc++.h>
vector<long long int>generateRow(int n){
      long long c=1;
       vector<long long int>ans;
       ans.push_back(1);
      for(int i=1;i<n;++i){
            c*=(n-i);
            c/=i;
            ans.push_back(c);
      }
      return ans;
}
vector<vector<long long int>> printPascal(int n) 
{
        vector<vector<long long int>>ans;
        for(int i=1;i<=n;++i){
              auto temp=generateRow(i);
              ans.push_back(temp);
        }
      return ans;
}
