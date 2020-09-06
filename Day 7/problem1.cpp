// https://www.codechef.com/problems/TRISQ

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
	    int n, ans;
	    cin>>n;
	    n = (int)n/2;
	    n *=2;
	    ans = (int) n*(n-2)/8;
	    cout<<ans<<"\n";
	}
	return 0;
}