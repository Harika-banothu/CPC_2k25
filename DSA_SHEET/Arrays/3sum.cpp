//Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
 bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(A[i]+A[l]+A[r]==X)
                    return true;
                else if(A[i]+A[l]+A[r]<X) l++;
                else 
                   r--;
            }
        }
        return false;
    }
