char firstRep (string s)
    {
        //code here.
        int n = s.length();
        
        map<char, int> mp;
        
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        for(int i=0; i<n; i++){
            if(mp[s[i]] > 1){
                return s[i];
            }
        }
        return '#';
    }
