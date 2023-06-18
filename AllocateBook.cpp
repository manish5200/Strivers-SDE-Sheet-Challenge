#include <bits/stdc++.h>

using namespace std;

bool isPossible(int n, int m, vector<int>& time, long long int mid) {
    int dayCount = 1;
    long long int timeCount = 0;
    for(int i=0;i<m;++i){
		if(timeCount + time [i] > mid){
			  dayCount++;
	        timeCount=time[i];
			if(dayCount > n || time[i]>mid)return false;
		}else{
			 timeCount+=time[i];
		}
	}
	  return true;
}

long long int ayushGivesNinjatest(int n, int m, vector<int>& time) {
    long long int low = 0;
    long long int sum = accumulate(time.begin(), time.end(), 0LL); // Calculate sum of time values

    long long int high = sum;
    long long int ans = -1;

    while (low <= high) {
        long long int mid = s + (e-s) / 2;
        if (isPossible(n, m, time, mid)) {
            ans = mid;
            high= mid - 1;
        } else {
            low= mid + 1;
        }
    }
    return ans;
}
