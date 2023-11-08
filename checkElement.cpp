	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		unordered_map<int, int> mp;
		
		for(int i=0; i<n; i++){
		    mp[arr[i]]++;
		}
		
		for(int i=A; i<=B; i++){
		    if(mp.find(i) == mp.end() || mp[i] == 0){
		        return false;
		    }
		}
		return true;
	}
