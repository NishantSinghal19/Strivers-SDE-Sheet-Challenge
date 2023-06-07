#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    // int n=nums.size();
    map<long long, pair<int,int>>mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long sum=arr[i]+arr[j];
            if(mp.find(target - sum)!=mp.end()){
                if(mp[target-sum].first!=i && mp[target-sum].second!=i && mp[target-sum].first!=j && mp[target-sum].second!=j){
                    return "Yes";
                }
            }
            mp[sum]={i,j};
        }
    }
    return "No";
    
}
