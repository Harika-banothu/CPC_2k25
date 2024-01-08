//Find Union and intersection of two sorted arrays
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
              nums1[k]=nums1[i];
              i--;k--;
            }
            else{
                nums1[k]=nums2[j];
                j--;k--;
            }
        }
        while(j>=0){
            nums1[k]=nums2[j];
            k--;j--;
        }
        
    }

void intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (i > 0 && arr1[i] == arr1[i - 1]) {       
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

