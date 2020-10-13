#include <iostream>
using namespace std;

#define ll long long

int main() {
	ll T;
	cin>>T;
	while(T--) {
	  ll n,k, count = 0, flag = 0;
	  cin>>n>>k;
	  ll arr[n];
	  for(ll i=0; i<n; i++) {
	    cin>>arr[i];
	  }
	  for(ll i=0; i<n-1; i++){
	    if(arr[i] >= k) {
	      arr[i+1] += arr[i] - k;
	      count++;
	    } else {
	      count++;
	      flag = 1;
	      break;
	    }
	  }
	  if(flag == 1) 
	    cout<<count<<endl;
	  else
	    cout<<count + 1 + arr[n-1]/k<<endl;
	}
	return 0;
}
