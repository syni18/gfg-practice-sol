string reverseWord(string str)
    {
        // Your code goes here
        int n = str.size();
        int i=0;
        stack<char> st;
        while(i < n){
            st.push(str[i]);
            i++;
        }
        i = 0;
        while(st.empty() == 0){
            str[i] = st.top();
            st.pop();
            i++;
        }
        return str;
    }
//  Another solution ----------
string reverseWord(string str){
    int start = 0;
    int end = str.size()-1;

    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}
