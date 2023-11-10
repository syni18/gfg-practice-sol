int transitionPoint(int arr[], int n) {
        // code here
        int start = 0;
        int last = n-1;
        while(start <= last){
            int mid = start + (last-start)/2;
            if(arr[mid] == 1 && arr[mid-1] == 0){
                return mid;
            }
            else if(arr[mid] == 0){
                start = mid+1;
            }
            else {
                last = mid;
            }
        }
        return -1;
    }
