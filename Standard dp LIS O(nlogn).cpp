/*
  time = O(nlogn)
  space = O(n);
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        arr.push_back(x);
	    }
	    
	    vector<int> tail(n,0);
	    int length=1;
	    tail[0]=arr[0];
	    for(int i=1;i<n;i++){
	        auto b = tail.begin();
	        auto e = tail.begin()+length;
	        auto it = lower_bound(b,e,arr[i]); // here lower_bound is used to compare all the values in the range from the  arr[i] it returns the pointer to that value which is larger than arr[i]
	        if(it == tail.begin()+length){
	            tail[length++] = arr[i];
	        }
	        else
	            *it = arr[i];
	    }
	    cout<<length<<endl;
	}
	return 0;
}
