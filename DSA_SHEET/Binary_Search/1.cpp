//Given a sorted array of N distinct elements, find a key in the array using the least number of comparisons
#include<bits/stdc++.h>
using namespace std;
int FindKey(int arr[], int n, int key){
     int l=0,r=n-1,m;
     while(l<=r){
        m=l+(r-l)/2;
        if(arr[m]==key)
           return m;
       if(arr[m]<key)
          l=m+1;
        else
          r=m-1; 
             
     }
     return -1;
     
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter key: ";
    int key;cin>>key;
    int result=FindKey(arr, n, key);

    if(result!=-1) 
       cout<<"Element found at index: "<<result<<endl;
    else 
      cout<<"Element not found"<<endl;
    return 0;
}