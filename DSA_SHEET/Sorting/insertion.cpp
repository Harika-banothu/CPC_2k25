void insert(int arr[], int i)
    {
        //code here
            int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            //swap(arr[i-1],arr[i]);
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
     }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=0;i<=n-1;i++){
            insert(arr,i);
        }
        
    }
