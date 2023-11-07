	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    int temp = arr[0];
	    for(int i=0; i<n; i++){
	        if(arr[i] <= arr[i+1]){
	            arr[i]= -1;
	        }
	        else {
	            arr[i] = arr[i+1];
	        }
	    }
	    arr[n-1] = -1;
	}
