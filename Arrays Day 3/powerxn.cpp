// #include <bits/stdc++.h>

// int modularExponentiation(int x, int n, int m) {
// 	double ans = 1.0;
//   long long nn = n;
//   if (nn < 0) nn = -1 * nn;
//   while (nn) {
//     if (nn % 2) {
//       ans = ans * x;
//       nn = nn - 1;
//     } else {
//       x = x * x;
//       nn = nn / 2;
//     }
//   }
//   if (n < 0) ans = (double)(1.0) / (double)(ans);
//   int a= int(ans)%m;
// 	return a;
// }
#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) { // Write your code here 
int res=1; while(n>0){  if(n&1){   //odd  
 res=(1LL*(res)*(x)%m)%m;  }  x=(1LL*(x)%m*(x)%m)%m;  n=n>>1; } return res; }

