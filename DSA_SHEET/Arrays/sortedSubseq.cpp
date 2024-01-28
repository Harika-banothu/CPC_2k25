//Given an array A of N integers, find any 3 elements in it such that A[i] < A[j] < A[k] and i < j < k.
 vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> ans;
        if(N < 3)
            return ans;
        int seq = 1;
        int mini=arr[0];
        int maxi= INT_MAX;
        int storemin = mini;
        for(int i=1;i<N;i++)
        {
            if(arr[i] == mini)    continue;
            else if(arr[i] < mini)
            {
                mini = arr[i];
                continue;
            }
            else if(arr[i] < maxi)
            {
                maxi = arr[i];
                storemin = mini;
            }
            else if(arr[i] > maxi)
            {
                ans.push_back(storemin);
                ans.push_back(maxi);
                ans.push_back(arr[i]);
                return ans;
            }
        }
        return ans;
    }
