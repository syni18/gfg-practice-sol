  bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second >= 2) return true;
        }
        return false;
    }
};
