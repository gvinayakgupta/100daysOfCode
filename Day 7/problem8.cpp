// https://www.codechef.com/problems/CHEFARRP

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
	    int n, count = 0;
	    cin>>n;
	    long arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    for(int i=0;i<n;i++)
        {
            int sum = 0, product = 1;
            for(int j=i;j>=0;j--)
            {
                sum = sum + arr[j];
                product = product*arr[j];
                if(sum == product)
                    count = count+1;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}
