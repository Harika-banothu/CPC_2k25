// Find the Minimum length Unsorted Subarray, sorting which makes the array sorted
#include<bits/stdc++.h>
using namespace std;
int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i+1]) {
                mini = min(mini, nums[i+1]);
                maxi = max(maxi, nums[i]);
            }
        }
        
        if (mini == INT_MAX && maxi == INT_MIN) return 0; 
        
        int left, right;
        

        for (left = 0; left < n; left++) {
            if (nums[left] > mini) break;
        }
        
       
        for (right = n - 1; right >= 0; right--) {
            if (nums[right] < maxi) break;
        }
        
        return right - left + 1;
    }
    int main(){
        int n;
        cout<<"Enter no.of elements: ";
        cin>>n;
        vector<int>arr(n);
        cout<<"Enter elements: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Minimum Length of unsorted subarray is "<<findUnsortedSubarray(arr);
        return 0;
    }