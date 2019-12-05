#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int sum;
	    cin>>sum;
	    
	    int dp[sum+1][n];
	    for(int i=0;i<n;i++)
	        dp[0][i]=1;
	   int x,y;
	    for(int i=1;i<=sum;i++){
	        for(int j=0;j<n;j++){
	            //including arr[j]
	            if(i-arr[j] >= 0)
	                x = dp[i-arr[j]][j];
	            else
	                x=0;
	            // excluding arr[j]
	            if(j>=1)
	                y = dp[i][j-1];
	            else
	                y=0;
	            
	            dp[i][j] = x+y;
	        }
	        
	    }
	    
	    
	    cout<<dp[sum][n-1]<<endl;
	}
	return 0;
}
