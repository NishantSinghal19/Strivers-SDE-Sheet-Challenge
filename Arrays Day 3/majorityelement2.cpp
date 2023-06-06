#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
      map<int, int> mpp;
      vector<int> v;

    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n / 3)) {
            v.push_back( it.first);
        }
    }

    return v;
}
