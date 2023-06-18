#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
       unordered_map<int,int>mp;
       vector<int>ans;
       for(auto it:arr){
            mp[it]++;
       }
        for(auto it:mp){
            if(it.second > floor(arr.size()/3) ) ans.push_back(it.first);
        }
     return ans;
}
