int singleNonDuplicate(vector<int>& arr)
{
	   int n=arr.size();
	   int low=0;
	   int high=n-1;
	   while(low<high){
		    int mid=low+(high-low)/2;
			if(mid%2==1) mid--;
			if(arr[mid] !=arr[mid+1]){
				  high=mid;
			}else{
				 low=mid+2;
			}
	   }
	     return arr[low];
}
