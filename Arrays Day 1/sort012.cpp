#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
   //   Write your code here
    int x=n-1;
        for(int i=0;i<n;i++){
            while(a[i] == 2 && x>=i){ swap(a[i],a[x]);x--; }
        }
        int y=x;
        for(int i=0;i<=y;i++){
            while(a[i]== 1 && x>=i){ swap(a[i],a[x]);x--;}
        }
}
