int binarysearch(int arr[], int n, int k) {
        // code here
        int start = 0;
        int last = n-1;
        
        while(start <= last){
            int mid = start + (last - start)/2;
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] < k){
                start = mid+1;
            }
            else {
                last = mid - 1;
            }
        }
        return -1;
    }
