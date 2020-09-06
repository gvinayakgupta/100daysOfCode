// https://www.codechef.com/problems/RRJOKE

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n, x, a, b;
	    cin>>n;
	    for(int i=0;i<n;i++) cin>>a>>b;
	    x = n;
	    for(int i=1;i<n;i++) x = x^i;
	    cout<<x<<"\n";
	}
	return 0;
}
