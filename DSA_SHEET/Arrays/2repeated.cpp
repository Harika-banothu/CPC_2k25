//Find the two repeating elements in a given array
 vector<int> twoRepeated (int arr[], int N) {
        // Your code here
        vector<int>r;
       for(int i=0;i<N+2;i++){
           int ind=abs(arr[i]);
           if(arr[ind]>0)
             arr[ind]=-arr[ind];
            else
               r.push_back(ind);
       }
       return r;
    }
