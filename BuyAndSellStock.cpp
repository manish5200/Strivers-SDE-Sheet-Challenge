#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
        int maxProfit=0;
        int BuyCost=INT_MAX;
        int index;
       for(int i=0;i<prices.size();++i){
             
             if(BuyCost>prices[i]){
                 BuyCost=min(BuyCost,prices[i]);
                 index=i;
             }
            if(index<i){
                maxProfit=max(maxProfit,prices[i]-BuyCost);
            }
       }
       return maxProfit;
}
