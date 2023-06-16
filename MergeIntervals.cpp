#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
             
        sort(begin(intervals),end(intervals));
           vector<vector<int>>mergedInterval;
           vector<int>tempInterval=intervals[0];
        for(auto interval:intervals){
            if(interval[0]<=tempInterval[1]){
                tempInterval[1]=max(tempInterval[1],interval[1]);
            }
            else{
                mergedInterval.push_back(tempInterval);
                tempInterval=interval;
            }
        }
        mergedInterval.push_back(tempInterval);
        return mergedInterval;
}
