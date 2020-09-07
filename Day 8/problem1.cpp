// https://www.codechef.com/problem/ADASCOOL

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
	    int n,m;
	    cin>>n>>m;
	    if((n*m)%2 == 0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
