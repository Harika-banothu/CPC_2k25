//Search an element in sorted and pivoted array
#include <bits/stdc++.h>
using namespace std;
int PivotedArray( vector<int>& arr, int key) {
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3};
	cout<<"Enter Key: ";
    int key; cin>>key;
	int index = PivotedArray(arr, key);
	if (index != -1) {
		cout << "Found at index " << index << endl;
	} else {
		cout << "Not found" << endl;
	}
	return 0;
}
