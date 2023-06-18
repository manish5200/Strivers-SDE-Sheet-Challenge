//TC - O(n) , SC - O(n)
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	    map<int,int>mp;
		pair<int,int>p;
		for(int i=1;i<=n;++i){
			 mp[i]=1;
		}
       for(int i=0;i<n;++i){
		    mp[arr[i]]++;
	   }
	   for(auto it : mp){
		    if(it.second==1){
                p.first=it.first;
			}else if(it.second==3){
				 p.second=it.first;
			}
	   }
	   return p;
}
//Maths
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	  //S-Sn
	  //S2-S2n
    long long int len = arr.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<arr.size(); i++){
       S -= (long long int)arr[i];
       P -= (long long int)arr[i]*(long long int)arr[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

	pair<int,int>ans;

    ans.first = missingNumber;
    ans.second = repeating;

    return ans;
}

