#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	vector<int> ans;
	for(int i=0;i<m;i++) ans.push_back(arr1[i]);
	for(int i=0;i<n;i++) ans.push_back(arr2[i]);
	sort(ans.begin(),ans.end());
	return ans;
}
