int shortestUnorderedSubarray(int a[], int n)
    {
        if(a[0] < a[1]){
            for(int i=1; i<n-1; i++){
                if(a[i] > a[i+1]){
                    return 3;
                }
            }
        }
        else {
            for(int i=1; i<n-1; i++){
                if(a[i] < a[i+1]){
                    return 3;
                }
            }
        }
        return 0;
    }
