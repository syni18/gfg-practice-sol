string is_palindrome(int n)
		{
		    // Code here.
		    int rev = 0;
		    int temp = n;
		    while(temp>0){
		        int rem = temp%10;
		        rev = rev*10 + rem;
		        temp = temp/10;
		    }
		    if(rev == n){
		        return "Yes";
		    }
		    else {
		        return "No";
		    }
		}
