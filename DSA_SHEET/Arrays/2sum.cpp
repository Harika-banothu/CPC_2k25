//Find pair of numbers with given sum X

bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_set<int>s;
	    for(int i=0;i<n;i++){
	        if(s.find(x-arr[i])!=s.end())
	              return true;
	         s.insert(arr[i]);
	    }
	    return false;
	}
