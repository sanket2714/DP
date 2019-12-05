#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    int sum,n;
	    cin>>sum>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    
	    int dp[sum+1];
	    dp[0]=0;
	    for(int i=1;i<=sum;i++)
	        dp[i] = INT_MAX;
	    
	    for(int i=1;i<=sum;i++){
	        for(int j=0;j<n;j++){
	            if(arr[j]<=i){
	                int sub_res = dp[i-arr[j]];
	                if(sub_res != INT_MAX && sub_res + 1 < dp[i])
	                    dp[i] = sub_res+1;
	            }
	        }
	    }
	    if(dp[sum] != INT_MAX)
	    cout<<dp[sum]<<endl;
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
