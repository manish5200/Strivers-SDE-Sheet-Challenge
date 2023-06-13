//Method 1 ->
sort(arr,arr+n);
//Method 2 -> 
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
      int c1=0 ,c2=0,c3=0;
      for(int i=0;i<n;++i){
         if(arr[i]==0)c1++;
         else if (arr[i]==1)c2++;
         else c3++;
      }
      int i=0;
      for(;i<c1;++i){
          arr[i]=0;
      }
      for(;i<c1+c2;++i){
         arr[i]=1;
      }
      for(;i<c1+c2+c3;++i){
         arr[i]=2;
      }
}
//Method 3 -> Optimal - Dutch National Flag algo
#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
      int l =0;
     int  mid =0;
     int h =n-1;
     while(mid<=h){
         if(arr[mid]==1){
             mid++;
         }else if(arr[mid]==0){
             swap(arr[l],arr[mid]);
             mid++;
             l++;
         }else{
             swap(arr[mid],arr[h]);
             h--;
         }
     }
}
