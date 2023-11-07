void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        stack<int> st;
        int temp = 0;
        for(int i=0; i<n; i++){
            st.push(arr[i]);
            if(st.size() == k || i == (n-1)){
                while(!st.empty()){
                    arr[temp++] = st.top();
                    st.pop();
                }
            }
        }
    }
