//Floor and Ceiling in a sorted array
//Given a sorted array and a value x, the ceiling of x is the smallest element in an array greater than or equal to x, and the floor is the greatest element smaller than or equal to x

#include<bits/stdc++.h>
using namespace std;
int FloorCeil(vector<int> &arr, int x, int n){
    int f=INT_MIN,c=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>=x)
           c=min(c,arr[i]);
        if(arr[i]<=x)
          f=max(f,arr[i]);
    }
    if(f==INT_MIN)  f=-1;
	if(c==INT_MAX)  c=-1;
    cout<<c<<" "<<f<<endl;
}
 int main(){
    vector<int> arr={1,2,3,4,5};
    int x=6;
    int n=5;
    FloorCeil(arr,x,n);
    return 0;
}
