#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    int dp[n];
    dp[0]=max(a1[0],a2[0]);
    dp[1]=max(max(a1[1],a2[1]),dp[0]);
    for(int i=2;i<n;i++){
        dp[i]=max(max(a1[i],a2[i])+dp[i-2],dp[i-1]);
    }
    cout<<dp[n-1];
    return 0;
}
