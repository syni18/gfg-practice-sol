 string reverseWord(string str)
    {
        // Your code goes here
        int n = str.length();
        int i=0;
        stack<char> st;
        
        while(i<n){
            st.push(str[i++]);
        }
        i=0;
        while(st.empty()==0){
            str[i++] = st.top();
            st.pop();
        }
        return str;
    }
