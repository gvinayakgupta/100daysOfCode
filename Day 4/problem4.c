// https://www.hackerearth.com/problem/algorithm/sum-and-product/

#include <stdio.h>
 
int main(){
	long int M = 1000000007;
	int n,i;
	scanf("%d",&n);
	long long int arr[n], s = 0;
	for(i=0;i<n;i++) scanf("%lld ",&arr[i]);
	for(i=0;i<n/2;i++){
		s += ((arr[2*i]%M) * (arr[2*i + 1]%M))%M;
	}
	s = s%M;
	printf("%lld", s);
	return 0;
}