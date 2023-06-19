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
