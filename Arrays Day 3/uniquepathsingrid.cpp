#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int a= n+m-2;
	int r=m-1;
	double res=1;
	for (int i = 1; i <= r; i++)
        res = res * (a - r + i) / i;
    return (int)res;
}
//combination
