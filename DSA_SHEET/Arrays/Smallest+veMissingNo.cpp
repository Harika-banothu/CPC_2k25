//You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array
int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0;i<n;i++){
            int element=arr[i];
            int pos=element-1;
            if(element>=1 && element<=n){
            if(arr[pos]!=element){
                swap(arr[pos],arr[i]);
                i--;
            }
        }
        }
        for(int i=0;i<n;i++){
            if(i+1!=arr[i])
              return i+1;
        }
        return n+1;
    } 
