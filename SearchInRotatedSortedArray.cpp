//Itterative Solution
int search(int* arr, int n, int key) {
    int l=0;
    int h = n-1;
    while(l<=h){
         int mid =(h+l)>>1;
        if(arr[mid]==key)return mid;
        if(arr[l]<=arr[mid]){
             if(arr[l]<=key && key<=arr[mid]){
                  h=mid-1;
             }else{
                  l=mid+1;
             }
        }else{
             if(arr[mid]<=key && key<=arr[h]){
                   l=mid+1;
             }
             else{
                  h=mid-1;
             }
        }
    }
    return -1;
}
//Recursive Solution 

int getPivot(int* arr ,int n){
       int l=0;
       int h=n-1;
       while(l<h){
            int mid=l+(h-l)/2;
          if(arr[mid]>=arr[0]){
                l=mid+1;
          }else{
               h=mid;
          }
       }
       return l;
}
int BinarySearch(int* arr ,int s , int e ,int k){
           int l=s;
           int h=e;
        while(l<=h){
             int mid=l+(h-l)/2;
             if(arr[mid]==k){
                  return mid;
             }else if(arr[mid]>k){
                   h=mid-1;
             }else{
                   l=mid+1;
             }
        }
        return -1;
}
int search(int* arr, int n, int key) {
         int s=0;
         int e=n-1;
         int mid=s+(e-s)/2;
      int pivot=getPivot(arr, n);
      if(arr[pivot]<=key && key<=arr[e]){
             return BinarySearch(arr,pivot, e,key);
      }else{
            return BinarySearch(arr,0,pivot-1,key);
      }
}
