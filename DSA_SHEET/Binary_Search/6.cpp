//Count the number of occurrences of x in a sorted array
#include<bits/stdc++.h>
using namespace std;

int count(vector<int> &arr, int n, int x) {
  int s = 0, e = n - 1;
  int mid = s + (e - s) / 2;
  int N = -1;
  while (s <= e) {
    if (arr[mid] == x) {
      N = mid;
      e=mid-1;
    } else if (x > arr[mid]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  int count = 0;
  if (N == -1)
    return count;
  else {
    int i = N;
    while (arr[i] == x) {
      count++;
      i++;
    }
    return count;
  }
}
int main(){
    vector<int> arr={1,1,2,3,4,5};
    cout<<count(arr,6,1);
}