void merge(int arr[], int l, int m, int r)
    {
         // Your code here
        int n1 = m - l + 1;
        int n2 = r - m;

        int leftArr[n1];
        int rightArr[n2];

        for (int i = 0; i < n1; i++)
            leftArr[i] = arr[l + i];
        for (int j = 0; j < n2; j++)
            rightArr[j] = arr[m + 1 + j];

        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (leftArr[i] <= rightArr[j])
            {
                arr[k] = leftArr[i];
                i++;
            }
            else
            {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }

    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) return;
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
       
    }
