#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{

    int arr[n + 1] = {0}; 
    for (int i = 0; i < n; i++) {
        arr[a[i]]++;
    }

    int repeating = -1, missing = -1;
    for (int i = 1; i <= n; i++) {
        if (arr[i] == 2) repeating = i;
        else if (arr[i] == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
	pair<int,int> p;
	p.second=repeating;
	p.first=missing;
    return p;
	
}
