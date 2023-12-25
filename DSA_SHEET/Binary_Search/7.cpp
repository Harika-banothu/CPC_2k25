//Find a Fixed Point ( where a[i] equals i ) in a given array
 
#include <bits/stdc++.h> 
using namespace std; 

int fixedpt(int arr[], int low, int high) 
{ 
	while (high >= low) { 
		int mid = low + (high - low) / 2; 
		if (mid == arr[mid]) 
			return mid; 
		int res = -1; 
		if (mid + 1 <= arr[high]) 
			res = fixedpt(arr, (mid + 1), high); 
		if (res != -1) 
			return res; 
		if (mid - 1 >= arr[low]) 
			return fixedpt(arr, low, (mid - 1)); 
	} 

	return -1; 
} 

int main() 
{ 
	int n;
        cout<<"Enter no.of elements: ";
        cin>>n;
        int arr[n];
        cout<<"Enter elements: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	cout << "Fixed Point is " << fixedpt(arr, 0, n - 1); 
	return 0; 
} 
 
