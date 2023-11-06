int convertFive(int n) {
    // Your code here
    string temp = "";
    
    while(n > 0){
        int rem = n%10;
        if(rem == 0){
            temp += '5';
        }
        else {
            temp += to_string(rem);
        }
        n = n/10;
    }
    reverse(temp.begin(), temp.end());
     n = stoi(temp);
    return n;
}
