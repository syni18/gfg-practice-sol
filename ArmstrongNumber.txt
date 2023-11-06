 string armstrongNumber(int n){
        // code here
        int temp = n;
        int sqr = 0;
        
        while(temp>0){
            int rem = temp%10;
            sqr = sqr + rem*rem*rem;
            temp = temp/10;
        }
        if(sqr == n){
            return "Yes";
        }
        else {
            return "No";
        }
    }
