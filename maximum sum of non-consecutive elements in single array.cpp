#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    int dp[n];
    dp[0]=a1[0];
    dp[1]=max(a1[1],a1[0]);
    for(int i=2;i<n;i++){
        dp[i]=max(a1[i]+dp[i-2],dp[i-1]);
    }
    cout<<dp[n-1];
}
