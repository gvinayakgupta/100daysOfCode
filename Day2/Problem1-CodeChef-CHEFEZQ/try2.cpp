// Partially Accepted
#include <iostream>
using namespace std;

#define ull unsigned long long

int main() {
	ull T;
	cin>>T;
	while(T--) {
	  ull n,k, read, curr = 0, ans = -1;
	  cin>>n>>k;
	  for(ull i=0; i<n; i++) {
	    cin>>read;
	    curr += read;
	    if(curr < k) {
	      ans = i;
	      break;
	    }
	    curr -= k;
	  }
	  if(ans == -1) 
	    ans = n + (curr/k);
	  cout<<ans+1<<endl;
	}
	return 0;
}
