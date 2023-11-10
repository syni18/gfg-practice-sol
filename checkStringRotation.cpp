bool areRotations(string s1,string s2)
    {
        // Your code here
        
        string temp = s1+s1;
        int t1 = temp.find(s2);
        return (t1 >= 0);
    }
