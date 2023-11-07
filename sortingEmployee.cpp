	static bool comp(node &a, node &b){
	    if(a.salary == b.salary){
	        return a.name < b.name;
	    }
	    return a.salary < b.salary;
	}
	void sortRecords(node arr[], int n)
	{
	    // Your code goes here
	    sort(arr, arr+n, comp);
	}
