#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	  int maxi=INT_MIN , prefP=1,sufP=1;
	  for(int i=0;i<n;++i){
		  if(sufP==0)sufP=1;
		  if(prefP==0)prefP=1;
		  sufP=sufP*arr[n-i-1];
		  prefP*=arr[i];
		  maxi=max(maxi,max(prefP,sufP));
		  
	  }
	  return maxi;
}
