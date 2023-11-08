  int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            if(i.second % 2 != 0){
                return i.first;
            }
        }
    }
