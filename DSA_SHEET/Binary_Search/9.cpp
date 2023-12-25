//Merge two sorted arrays of size N and M
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
        sort(nums1.begin(),nums1.end());
}

int main() {
    int m, n;
    cout << "Enter the size of array1: ";
    cin >> m;
    
    vector<int> nums1(m);
    
    cout << "Enter array1 elements : ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter the size of array2: ";
    cin >> n;

    vector<int> nums2(n);

    cout << "Enter array2 elements : ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}