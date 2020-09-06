// https://www.codechef.com/problems/ZCOSCH

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n > 100) cout<<"0";
	else if(n > 50) cout<<"50";
	else cout<<"100";
	return 0;
}
