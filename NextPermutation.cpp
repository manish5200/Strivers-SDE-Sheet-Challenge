#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
       int index=-1;
  //find first break point
       for(int i=n-2;i>=0 ;--i){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
       }
    //find second break point if we find the first one ans swap the both
    for(int i=n-1;i>=index && index!=-1 ;--i){
          if(nums[i]>nums[index]){
               swap(nums[i],nums[index]);
               break;
          }
    }
  //Now reverse from the first index+1 to last for next permutation
      reverse(nums.begin()+index+1,nums.end());
      return nums;
}
