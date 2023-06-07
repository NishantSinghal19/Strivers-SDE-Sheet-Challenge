
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> mpp(256,-1);
    int l=0;int r=0;
    int n=input.size();
    int ans=0;
    while(r<n){
        if(mpp[input[r]]!=-1){
            l= max(mpp[input[r]]+1,l);
        }
        mpp[input[r]]=r;
        ans=max(ans,r-l+1);
        r++;
    }
    return ans;
}
