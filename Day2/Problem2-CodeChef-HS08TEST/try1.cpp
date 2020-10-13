// Wrong Answer
#include <bits/stdc++.h>
using namespace std;

int main() {
	int X;
	float Y;
	cin>>X>>Y;
	if(X%5 == 0){
	  Y = Y - X - 0.50;
	}
	cout<<fixed<<setprecision(2)<<Y;
}
