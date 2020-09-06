// https://www.codechef.com/problems/CHNGIT

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n], freq[n][2], c = 0, max_freq = 0;
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	        int j=0;
	        for(j=0;j<c;j++) {
	            if(freq[j][0] == arr[i]){
	                freq[j][1]++;
	                if(freq[j][1] > max_freq) max_freq = freq[j][1];
	                break;
	            }
	        }
	        if(j == c){
	            freq[c][0] = arr[i];
	            freq[c][1] = 1;
	            if(max_freq < freq[c][1]) max_freq = 1;
	            c++;
	        }
	    }
	    cout<<n - max_freq<<"\n";
	}
	return 0;
}
