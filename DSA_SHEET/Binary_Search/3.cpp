//Check for Majority Element in a sorted array
// majority element (present more than n/2 times).

#include<bits/stdc++.h>
using namespace std;

int Majority(vector<int> &arr,int n){
    map<int,int>m;
    for(auto i:arr){
        m[i]++;
    }
    for(auto it:m){
        if(it.second>n/2)
          return it.first;
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;
    
    vector<int>arr(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = Majority(arr,n);
    if (result != 0) {
        cout << "Majority element: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}