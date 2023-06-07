#include <bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = book[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}
