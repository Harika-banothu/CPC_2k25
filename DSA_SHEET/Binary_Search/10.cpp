#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto num:nums1)   
            v.push_back(num);
        
        for(auto num:nums2)  
            v.push_back(num);
        sort(v.begin(),v.end());  
        int n=v.size();  
        
        return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;
}

int main()
{
    vector<int>ar1 = { 1, 12, 15, 26, 38 };
    vector<int>ar2= { 2, 13, 17, 30, 45 };
 
    int n1 = ar1.size();
    int n2 = ar2.size();
    if (n1 == n2)
        cout << "Median is " << findMedianSortedArrays(ar1, ar2);
    else
        cout << "Doesn't work for arrays of unequal size";
    return 0;
}